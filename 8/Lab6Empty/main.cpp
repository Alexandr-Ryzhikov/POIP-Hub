#include "adc1registers.hpp" //for ADC1
#include "adccommonregisters.hpp" //for ADCCommon
#include "gpioaregisters.hpp"  //for Gpioa
#include "gpiocregisters.hpp"  //for Gpioc
#include "rccregisters.hpp"    //for RCC
#include "tim2registers.hpp"   //for TIM2
#include <iostream>
#include "ADC.hpp"
#include "Temper.hpp"
#include "Voltag.hpp"

extern "C"
{
int __low_level_init(void)
{
  //Switch on external 8 MHz oscillator
  RCC::CR::HSEON::On::Set(); //Zhenya the best boy <3
  while(!RCC::CR::HSERDY::Ready::IsSet()) //Zhenya the best boy <3
    {
    };
  RCC::CFGR::SW::Hse::Set();
  //Switch system clock on external oscillator
   while(!RCC::CFGR::SWS::Hse::IsSet()) //Zhenya the best boy <3
    {
    };
  //Switch on clock on PortA a
  RCC::AHB1ENR::GPIOAEN::Enable::Set(); //Zhenya the best boy <3
  RCC::AHB1ENR::GPIOCEN::Enable::Set(); //Zhenya the best boy <3
  GPIOA::MODER::MODER0::Analog::Set(); //Zhenya the best boy <3
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
   //********* ADC1 setup ******************************************************
   //Switch on clock on ADC1
    RCC::APB2ENR::ADC1EN::Enable::Set();
   //Switch On internal tempearture sensor
    ADC_Common::CCR::TSVREFE::Enable::Set(); 
     //razryadnost'
   //  ADC1::CR1::RES::Bits12::Set(); 
   //Set single conversion mode
   //  ADC1::CR2::EOCS::SingleConversion::Set(); 
   // Set 84 cycles sample rate for channel 18
     ADC1::SMPR1::SMP18::Cycles480::Set(); 
     ADC1::SMPR2::SMP0::Cycles480::Set(); 
   // Set laentgh of conversion sequence to 1
    // ADC1::SQR1::L::Conversions1::Set(); 
     return 1;
}
}

using MyADC = ADC<ADC1>;

int main()
{
  
  MyADC::On();
  MyADC::Config(Resolution::Bits12);
  MyADC::SetChannels(0, 18);  
 
  
  for( ; ;) 
  {
    MyADC::Start(); 
   
    
    Voltage Volta(3.3F / 4096.0f, 0.0f) ;
    Temperature Tempe((3.3f/(4096.0f*0.0025f)),(25.0f-0.76f/0.0025f)) ;
    IVariable* Variables[2] = {&Volta, &Tempe} ;
    
    for (auto it: Variables)
    {
      while(!MyADC::IsReady()) 
      {
      }
      std::uint32_t code = MyADC::Get(); 
      it->Calculate(code) ;
      std::cout << it->GetName() << ": "<< it->GetValue() << std::endl; 
    }
   
  } 
}
