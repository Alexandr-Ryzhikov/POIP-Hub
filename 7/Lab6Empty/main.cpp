#include "adc1registers.hpp" //for ADC1
#include "adccommonregisters.hpp" //for ADCCommon
#include "gpioaregisters.hpp"  //for Gpioa
#include "gpiocregisters.hpp"  //for Gpioc
#include "rccregisters.hpp"    //for RCC
#include "tim2registers.hpp"   //for TIM2
#include <iostream>


extern "C"
{
int __low_level_init(void)
{

  //Switch on external 8 MHz oscillator
  RCC::CR::HSEON::On::Set();
  while(!RCC::CR::HSERDY::Ready::IsSet())
    {
    };
  
  RCC::CFGR::SW::Hse::Set();

  
  //Switch system clock on external oscillator
   while(!RCC::CFGR::SWS::Hse::IsSet())
    {
    };
    
  //Switch on clock on PortA a
  RCC::AHB1ENR::GPIOAEN::Enable::Set();
  RCC::AHB1ENR::GPIOCEN::Enable::Set();
  GPIOA::MODER::MODER0::Analog::Set();
  GPIOA::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();
     
   // ************** Setup TIM2 ***********
   // Set Devider PSC to count every 1 ms
   TIM2::PSC::Write(7999);
   
   // Set ARR to 5 seconds  overflow
   TIM2::ARR::Write(500);
   
   // Clear Overdlow event flag  
   TIM2::CR1::URS::OverflowEvent::Set();
   
   // Reset counter
   TIM2::CR1::CEN::Enable::Set();
   
   // Enable TIM2 to count
   TIM2::DIER::UIE::Enable::Set() ;
    
   //********* ADC1 setup
   //Switch on clock on ADC1
     RCC::APB2ENR::ADC1EN::Enable::Set(); //podaem tactirovanie na ADC1
   //Switch On internal tempearture sensor
   
     //razryadnost'
     ADC1::CR1::RES::Bits10::Set();
   //Set single conversion mode
     ADC1::CR2::EOCS::SingleConversion::Set();
   // Set 84 cycles sample rate for channel 18
     ADC1::SMPR2::SMP0::Cycles480::Set();
     ADC1::SMPR1::SMP18::Cycles480::Set();
   // Set laentgh of conversion sequence to 1
     ADC1::SQR1::L::Conversions2::Set();
   // Connect first conversion on Channel 18 
     ADC1::SQR3::SQ1::Channel18::Set();
     ADC1::SQR3::SQ2::Channel0::Set();
  
  return 1;
}
}
//Bedi s kalibrovkoi
//---------------------------Adress ih ----------------------------------------
// Temperature sensor calibration values
constexpr size_t tsCal1Addr = 0x1FFF7A2C; //TS ADC raw data acquired at temperature of 30 °C
constexpr size_t tsCal2Addr =  0x1FFF7A2E; // TS ADC raw data acquired at temperature of 110 °C
// Internal reference voltage calibration values
constexpr size_t VddaCalAddr =  0x1FFF7A2A; //Raw data acquired at temperature of 30 °C
//--------------------Kalibrovochnie znachenia---------------------------------
// Temperature sensor calibration values
volatile uint16_t *tsCal1Pointer = reinterpret_cast<volatile uint16_t*>(tsCal1Addr) ;
volatile uint16_t *tsCal2Pointer = reinterpret_cast<volatile uint16_t*>(tsCal2Addr) ;
uint16_t tsCal132 = (*tsCal1Pointer);
uint16_t tsCal232 = (*tsCal2Pointer);
float tsCal1 = tsCal132;
float tsCal2 = tsCal232;
// Internal reference voltage calibration values
volatile uint16_t *VddaCalPointer = reinterpret_cast<volatile uint16_t*>(VddaCalAddr) ;
uint16_t VddaCal32 = (*VddaCalPointer);
float VddaCal = VddaCal32;
/*---------------------------koefficienti--------------------------------------
temperature = (110-30) * (Adc_code - tsCal1) / (tsCal2- tsCal2) + 30 ;
kx+b:
temperature = ADC_Code * (110-30)/(tsCal2- tsCal2) + (30 - (110-30)*tsCal1/(tsCal2- tsCal2) )
k = (110-30)/(tsCal2- tsCal2)
b = 30 - (110-30)*tsCal1/(tsCal2- tsCal2)
Internal reference voltage calibration:-----------------------------------------
temperature = (110-30) * ((ADC_Code * vddaCal)/vdda -  tsCal1) / (tsCal2 - tsCal1) + DEGREE_30;
kx+b:
temperature = ADC_Code * (110-30)*VddaCal/(Vdda*(tsCal2-tsCal1)) + DEGREE_30 - (110-30)*tsCal1/(tsCal2-tsCal1)
k = (110-30)*VddaCal/(Vdda*(tsCal2-tsCal1))
b = DEGREE_30 - (110-30)*tsCal1/(tsCal2-tsCal1)
*/
/*---------------Temperature coeficients without calibration--------------------
2.5 - Average slope
0.76 - Voltage at 25
3.3 - Reference voltage
1024 - 2^10 (for 10bits)
*/
//rascheti
constexpr float B1 = 0;                           //(25.0F - 0.76F/0.0025F); // see datacheet (page 226) and calculate B coeficient here ;
constexpr float K1 = 3.3F/1024;                           //(3.308F/1024.0F)/0.0025F ; // see datcheet ((page 226)) and calculate K coeficient here ; 

constexpr float B2 = (25.0F - 0.76F/2.5F); // see datacheet (page 226) and calculate B coeficient here ;
constexpr float K2 = (3.3F/1024.0F)/2.5F ; // see datcheet ((page 226)) and calculate K coeficient here ;

int main()
{
    
  std::uint32_t data = 0U ;
  float temperature = 0.0F ;
  float temp1 = 0.0F;
  float temp2 = 0.0F;
  float degree_30 = 30.0F;
  float voltage = 0.0F ;
     // Enable ADC1
    ADC1::CR2::ADON::Enable::Set();
  
  for(;;)    
  {
    //**************ADC*****************
 
    //Start conversion
    ADC1::CR2::SWSTART::On::Set();
    // wait until Conversion is not complete 
    while(!ADC1::SR::EOC::ConversionComplete::IsSet());
    {
    };
          
    //Get data from ADC   
    data = ADC1::DR::Get(); //Get data from ADC;
    
//Temperatura (bez kalibrovki
    temperature = data * K2 + B2 ; //Convert ADC counts to temperature
//temperature sensor calibration
    temp1 = data * (110-30)/(tsCal2 - tsCal1) + (30 - (110-30)*tsCal1/(tsCal2- tsCal1) );
//temperature sensor and internal reference voltage calibration
    temp2 = data * (110-30)*VddaCal/(data*(tsCal2-tsCal1)) + degree_30 - (110-30)*tsCal1/(tsCal2-tsCal1) ; //Convert ADC counts to temperature
//Voltage
    voltage = data * K1 + B1 ; //ADC v napryazhenie
//Vivodim result
    std::cout << "\nCount: " << data << " \nVoltage: " << voltage << " \nTemperature (without calibration) : " << temperature << " \nTemperature (with calibretion): " << temp1 << " \nTemperature with internal reference voltage calibration: " << temp2 << std::endl ;

//Diodici
   if(voltage <= 0.8F)
  {
    GPIOC::ODR::ODR5::Low::Set();
    GPIOC::ODR::ODR9::Low::Set();
    GPIOC::ODR::ODR8::Low::Set();
    GPIOA::ODR::ODR5::High::Set();
  }
  if((voltage <= 1.6F) && (voltage >= 0.8F))
  {
    GPIOC::ODR::ODR5::Low::Set();
    GPIOC::ODR::ODR8::Low::Set();
    GPIOA::ODR::ODR5::High::Set();
    GPIOC::ODR::ODR9::High::Set();
  }
  if((voltage <= 2.4F) && (voltage >= 1.6F))
  {
    GPIOC::ODR::ODR5::Low::Set();
    GPIOC::ODR::ODR9::High::Set();
    GPIOC::ODR::ODR8::High::Set();
    GPIOA::ODR::ODR5::High::Set();
  }
  if((voltage <= 3.3F) && (voltage >= 2.4F))
  {
    GPIOC::ODR::ODR5::High::Set();
    GPIOC::ODR::ODR9::High::Set();
    GPIOC::ODR::ODR8::High::Set();
    GPIOA::ODR::ODR5::High::Set();
  }
  
    //Next conversion after 5 sec, wait untel timer is not overflow
   // while(TIM2::SR::UIF::NoUpdate::IsSet()) 
   // {
   // }
   // TIM2::SR::UIF::NoUpdate::Set();
  }
}
