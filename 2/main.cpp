#include "gpioaregisters.hpp" //for GPIOA
#include "gpiocregisters.hpp" //for GPIOC
#include "rccregisters.hpp" //for RCC

int main()
{
  using namespace std; 
  RCC::AHB1ENR::GPIOAEN::Enable::Set();
  RCC::AHB1ENR::GPIOCEN::Enable::Set();
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();
  // Proveryaem svet
  GPIOC::ODR::ODR5::Enable::Set(); //Gorit
  GPIOC::ODR::ODR8::Enable::Set(); //Gorit
  GPIOC::ODR::ODR9::Enable::Set(); //Gorit
  GPIOC::ODR::ODR5::Disable::Set(); //Ne gorit
  GPIOC::ODR::ODR8::Disable::Set(); //Ne gorit
  GPIOC::ODR::ODR9::Disable::Set(); //Ne gorit
  
  constexpr uint32_t AdressModer=0x40020000;
  uint32_t* PointerOnModer=reinterpret_cast<uint32_t*>(AdressModer); //mutki s adresom
 *PointerOnModer |=(1<<10);
 
 constexpr uint32_t AdressODR5 =0x40020014;
 uint32_t* PointerOnODR5=reinterpret_cast<uint32_t*>(0x40020014); //mutki s adresom
 
 constexpr uint32_t AdressODR8 =0x40020814;
 uint32_t* PointerOnODR8=reinterpret_cast<uint32_t*>(0x40020814); //mutki s adresom
 
  constexpr uint32_t AdressODR9 =0x40020814;
 uint32_t* PointerOnODR9=reinterpret_cast<uint32_t*>(0x40020814); //mutki s adresom


 for( ; ; )
  {
   *PointerOnODR5 |=(1<<5); //Vkluchenie LED1
   *PointerOnODR9 |=(1<<9); //Vkluchenie LED2
   *PointerOnODR8 |=(1<<8); //Vkluchenie LED3
   for(int i=0; i<=3; i++)
    {
    i=i;
    }
   *PointerOnODR5 &= ~(1<<5); //Vikluchenie LED1
   *PointerOnODR9 &= ~(1<<9); //Vikluchenie LED2
   *PointerOnODR8 &= ~(1<<8); //Vikluchenie LED3
  }
  return 0;
}
