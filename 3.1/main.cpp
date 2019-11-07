#include "rccregisters.hpp"
#include "gpioaregisters.hpp"
#include "gpiocregisters.hpp"

extern "C"
{
  int __low_level_init (void)
  {
    RCC::CR::HSEON::Enable::Set();
    while (!RCC::CR::HSERDY::Enable::IsSet());
    {
    };
    
    RCC::CFGR::SW::Hse::Set();
    while (!RCC::CFGR::SWS::Hse::IsSet());
    {
    };
    
    RCC::AHB1ENR::GPIOCEN::Enable::Set(); //podkluchaem porti C
    RCC::AHB1ENR::GPIOAEN::Enable::Set(); //podkluchaem porti A
    GPIOA::MODER::MODER5::Output::Set(); //Podkluchaem port kak vihod
    GPIOC::MODER::MODER5::Output::Set(); //Podkluchaem port kak vihod
    GPIOC::MODER::MODER8::Output::Set(); //Podkluchaem port kak vihod
    GPIOC::MODER::MODER9::Output::Set(); //Podkluchaem port kak vihod
    GPIOC::MODER::MODER13::Input::Set(); //Podkluchaem port kak vhod
    return 0;
  }
}

int main()
{
 for( ; ; )
 {
    if (GPIOC::IDR::IDR13::Off::IsSet()) //opros: nazhata li knopka
    {
      for( ; ; )
      {
      GPIOA::ODR::ODR5::High::Set(); //vkluchaem LED1
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
        }
      GPIOA::ODR::ODR5::Low::Set(); //vikluchaem LED1
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR9::High::Set(); //vkluchaem LED2
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR9::Low::Set(); //vikluchaem LED2
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR8::High::Set(); //vkluchaem LED3
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR8::Low::Set(); //vikluchaem LED3
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR5::High::Set(); //vkluchaem LED4
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
          
        }
      GPIOC::ODR::ODR5::Low::Set(); //vikluchaem LED4
      for (int i=0; i<1000000; i++) //cikl dlya zaderzhki
        {
         
        }
      if (GPIOC::IDR::IDR13::Off::IsSet())
        return;
      }
    }
  }
  return 0;
}
