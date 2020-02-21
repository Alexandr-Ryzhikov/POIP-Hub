#include "adc1registers.hpp" //for ADC1
#include "adccommonregisters.hpp" //for ADCCommon
#include "gpioaregisters.hpp"  //for Gpioa
#include "gpiocregisters.hpp"  //for Gpioc
#include "rccregisters.hpp"    //for RCC
#include "tim2registers.hpp"   //for TIM2
#include <iostream>

using namespace std;

class ACP
{
private:
  
    void VoltSet ()
    {
      RCC::AHB1ENR::GPIOAEN::Enable::Set(); //Port A on
      RCC::AHB1ENR::GPIOCEN::Enable::Set(); //Port C on
      GPIOA::MODER::MODER0::Analog::Set(); //Analog
      //razryadnost'
      ADC1::CR1::RES::Bits10::Set();
      //Set single conversion mode
      ADC1::CR2::EOCS::SingleConversion::Set();
    }
    
    void TempSet ()
    {
     //Switch On internal tempearture sensor
     ADC_Common::CCR::TSVREFE::Enable::Set();
     //razryadnost'
     ADC1::CR1::RES::Bits10::Set();
     //Set single conversion mode
     ADC1::CR2::EOCS::SingleConversion::Set();
    }
  
  
public:
  void SettingACP ()
  {
   RCC::CR::HSEON::On::Set();
   while(!RCC::CR::HSERDY::Ready::IsSet())
    {
    };
   RCC::CFGR::SW::Hse::Set();
   //Switch system clock on external oscillator
   while(!RCC::CFGR::SWS::Hse::IsSet())
    {
    };
   //Switch on clock on ADC1
   RCC::APB2ENR::ADC1EN::Enable::Set(); //podaem tactirovanie na ADC1
   // Enable ADC1
   ADC1::CR2::ADON::Enable::Set();
  }
  
  void Voltage ()
  {
   // Set laentgh of conversion sequence to 1
   ADC1::SQR1::L::Conversions1::Set();
   // Connect first conversion on Channel 18 
   ADC1::SQR3::SQ1::Channel0::Set();
   // Set 84 cycles sample rate for channel 18
   ADC1::SMPR2::SMP0::Cycles480::Set();
   constexpr float B1 = 0;                           //(25.0F - 0.76F/0.0025F); // see datacheet (page 226) and calculate B coeficient here ;
   constexpr float K1 = 3.3F/1024;                           //(3.308F/1024.0F)/0.0025F ; // see datcheet ((page 226)) and calculate K coeficient here ; 
   std::uint32_t datav = 0U ;
   float voltage = 0.0F ;
   //Start conversion
   ADC1::CR2::SWSTART::On::Set();
   // wait until Conversion is not complete 
   while(!ADC1::SR::EOC::ConversionComplete::IsSet());
   {
   };    
   //Get data from ADC
   datav = ADC1::DR::Get(); //Get data from ADC;
   voltage = datav * K1 + B1 ; //ADC v napryazhenie
   std::cout << "Count: " << datav << " voltage: " << voltage << std::endl ;
  }
  
  void Temperature ()
  {
   // Set laentgh of conversion sequence to 1
   ADC1::SQR1::L::Conversions1::Set();    // Connect first conversion on Channel 18 
   ADC1::SQR3::SQ1::Channel0::Set();
   ADC1::SMPR1::SMP18::Cycles480::Set();
   constexpr float B2 = (25.0F - 0.76F/2.5F); // see datacheet (page 226) and calculate B coeficient here ;
   constexpr float K2 = (3.3F/1024.0F)/2.5F ; // see datcheet ((page 226)) and calculate K coeficient here ;
   std::uint32_t datat = 0U ;
   float temperature = 0.0F ;
   //Start conversion
   ADC1::CR2::SWSTART::On::Set();
   // wait until Conversion is not complete 
   while(!ADC1::SR::EOC::ConversionComplete::IsSet());
   {
   };    
   //Get data from ADC
   datat = ADC1::DR::Get(); //Get data from ADC;
   temperature = datat * K2 + B2 ; //Convert ADC counts to temperature
   std::cout << "Count: " << datat << " Temperature: " << temperature << std::endl ;
  }
};

int main()
{
  for(;;)    
  {
    ACP ADC1;
    ADC1. SettingACP();
    ADC1. Voltage();
    ADC1. Temperature();
  }
  return 0;
}
