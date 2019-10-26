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
    
    RCC::AHB1ENR::GPIOCEN::Enable::Set();
    RCC::AHB1ENR::GPIOAEN::Enable::Set();
    GPIOA::MODER::MODER5::Output::Set();
    GPIOC::MODER::MODER5::Output::Set();
    GPIOC::MODER::MODER8::Output::Set();
    GPIOC::MODER::MODER9::Output::Set();
    GPIOC::MODER::MODER13::Input::Set();
    return 0;
  }
}

int main()
{
  for( ; ; )
  {
    if (GPIOC::IDR::IDR13::On::IsSet())
    {
      GPIOA::ODR::ODR5::High::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOA::ODR::ODR5::Low::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR9::High::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR9::Low::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR8::High::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR8::Low::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR5::High::Set();
      for (int i=0; i<1000000; i++)
        {
        }
      GPIOC::ODR::ODR5::Low::Set();
      for (int i=0; i<1000000; i++)
        {
        }
    }
  }
  
  return 0;
}
