/*******************************************************************************
* Filename      : syscfgcompregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGCOMPREGISTERS_HPP)
#define SYSCFGCOMPREGISTERS_HPP

#include "syscfgcompfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SYSCFG_COMP
{
  struct SYSCFG_COMPSYSCFG_CFGR1Base {} ;

  struct SYSCFG_CFGR1 : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using MEM_MODE = SYSCFG_COMP_SYSCFG_CFGR1_MEM_MODE_Values<SYSCFG_COMP::SYSCFG_CFGR1, 0, 2, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using ADC_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_ADC_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 8, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using USART1_TX_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_USART1_TX_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 9, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using USART1_RX_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_USART1_RX_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 10, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using TIM16_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_TIM16_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 11, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using TIM17_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_TIM17_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 12, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C_PB6_FM = SYSCFG_COMP_SYSCFG_CFGR1_I2C_PB6_FM_Values<SYSCFG_COMP::SYSCFG_CFGR1, 16, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C_PB7_FM = SYSCFG_COMP_SYSCFG_CFGR1_I2C_PB7_FM_Values<SYSCFG_COMP::SYSCFG_CFGR1, 17, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C_PB8_FM = SYSCFG_COMP_SYSCFG_CFGR1_I2C_PB8_FM_Values<SYSCFG_COMP::SYSCFG_CFGR1, 18, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C_PB9_FM = SYSCFG_COMP_SYSCFG_CFGR1_I2C_PB9_FM_Values<SYSCFG_COMP::SYSCFG_CFGR1, 19, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C1_FM_plus = SYSCFG_COMP_SYSCFG_CFGR1_I2C1_FM_plus_Values<SYSCFG_COMP::SYSCFG_CFGR1, 20, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C2_FM_plus = SYSCFG_COMP_SYSCFG_CFGR1_I2C2_FM_plus_Values<SYSCFG_COMP::SYSCFG_CFGR1, 21, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using SPI2_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_SPI2_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 24, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using USART2_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_USART2_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 25, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using USART3_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_USART3_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 26, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using I2C1_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_I2C1_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 27, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using TIM1_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_TIM1_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 28, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using TIM2_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_TIM2_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 29, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using TIM3_DMA_RMP = SYSCFG_COMP_SYSCFG_CFGR1_TIM3_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 30, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_CFGR1_TIM3_DMA_RMP_Values<SYSCFG_COMP::SYSCFG_CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_CFGR1Pack  = Register<0x40010000, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR1Base, T...> ;

  struct SYSCFG_COMPSYSCFG_EXTICR1Base {} ;

  struct SYSCFG_EXTICR1 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI3 = SYSCFG_COMP_SYSCFG_EXTICR1_EXTI3_Values<SYSCFG_COMP::SYSCFG_EXTICR1, 12, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR1Base> ;
    using EXTI2 = SYSCFG_COMP_SYSCFG_EXTICR1_EXTI2_Values<SYSCFG_COMP::SYSCFG_EXTICR1, 8, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR1Base> ;
    using EXTI1 = SYSCFG_COMP_SYSCFG_EXTICR1_EXTI1_Values<SYSCFG_COMP::SYSCFG_EXTICR1, 4, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR1Base> ;
    using EXTI0 = SYSCFG_COMP_SYSCFG_EXTICR1_EXTI0_Values<SYSCFG_COMP::SYSCFG_EXTICR1, 0, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR1Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_EXTICR1_EXTI0_Values<SYSCFG_COMP::SYSCFG_EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_EXTICR1Pack  = Register<0x40010008, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR1Base, T...> ;

  struct SYSCFG_COMPSYSCFG_EXTICR2Base {} ;

  struct SYSCFG_EXTICR2 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI7 = SYSCFG_COMP_SYSCFG_EXTICR2_EXTI7_Values<SYSCFG_COMP::SYSCFG_EXTICR2, 12, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR2Base> ;
    using EXTI6 = SYSCFG_COMP_SYSCFG_EXTICR2_EXTI6_Values<SYSCFG_COMP::SYSCFG_EXTICR2, 8, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR2Base> ;
    using EXTI5 = SYSCFG_COMP_SYSCFG_EXTICR2_EXTI5_Values<SYSCFG_COMP::SYSCFG_EXTICR2, 4, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR2Base> ;
    using EXTI4 = SYSCFG_COMP_SYSCFG_EXTICR2_EXTI4_Values<SYSCFG_COMP::SYSCFG_EXTICR2, 0, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR2Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_EXTICR2_EXTI4_Values<SYSCFG_COMP::SYSCFG_EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_EXTICR2Pack  = Register<0x4001000C, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR2Base, T...> ;

  struct SYSCFG_COMPSYSCFG_EXTICR3Base {} ;

  struct SYSCFG_EXTICR3 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI11 = SYSCFG_COMP_SYSCFG_EXTICR3_EXTI11_Values<SYSCFG_COMP::SYSCFG_EXTICR3, 12, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR3Base> ;
    using EXTI10 = SYSCFG_COMP_SYSCFG_EXTICR3_EXTI10_Values<SYSCFG_COMP::SYSCFG_EXTICR3, 8, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR3Base> ;
    using EXTI9 = SYSCFG_COMP_SYSCFG_EXTICR3_EXTI9_Values<SYSCFG_COMP::SYSCFG_EXTICR3, 4, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR3Base> ;
    using EXTI8 = SYSCFG_COMP_SYSCFG_EXTICR3_EXTI8_Values<SYSCFG_COMP::SYSCFG_EXTICR3, 0, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR3Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_EXTICR3_EXTI8_Values<SYSCFG_COMP::SYSCFG_EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_EXTICR3Pack  = Register<0x40010010, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR3Base, T...> ;

  struct SYSCFG_COMPSYSCFG_EXTICR4Base {} ;

  struct SYSCFG_EXTICR4 : public RegisterBase<0x40010014, 32, ReadWriteMode>
  {
    using EXTI15 = SYSCFG_COMP_SYSCFG_EXTICR4_EXTI15_Values<SYSCFG_COMP::SYSCFG_EXTICR4, 12, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR4Base> ;
    using EXTI14 = SYSCFG_COMP_SYSCFG_EXTICR4_EXTI14_Values<SYSCFG_COMP::SYSCFG_EXTICR4, 8, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR4Base> ;
    using EXTI13 = SYSCFG_COMP_SYSCFG_EXTICR4_EXTI13_Values<SYSCFG_COMP::SYSCFG_EXTICR4, 4, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR4Base> ;
    using EXTI12 = SYSCFG_COMP_SYSCFG_EXTICR4_EXTI12_Values<SYSCFG_COMP::SYSCFG_EXTICR4, 0, 4, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR4Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_EXTICR4_EXTI12_Values<SYSCFG_COMP::SYSCFG_EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_EXTICR4Pack  = Register<0x40010014, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_EXTICR4Base, T...> ;

  struct SYSCFG_COMPSYSCFG_CFGR2Base {} ;

  struct SYSCFG_CFGR2 : public RegisterBase<0x40010018, 32, ReadWriteMode>
  {
    using SRAM_PEF = SYSCFG_COMP_SYSCFG_CFGR2_SRAM_PEF_Values<SYSCFG_COMP::SYSCFG_CFGR2, 8, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR2Base> ;
    using PVD_LOCK = SYSCFG_COMP_SYSCFG_CFGR2_PVD_LOCK_Values<SYSCFG_COMP::SYSCFG_CFGR2, 2, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR2Base> ;
    using SRAM_PARITY_LOCK = SYSCFG_COMP_SYSCFG_CFGR2_SRAM_PARITY_LOCK_Values<SYSCFG_COMP::SYSCFG_CFGR2, 1, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR2Base> ;
    using LOCUP_LOCK = SYSCFG_COMP_SYSCFG_CFGR2_LOCUP_LOCK_Values<SYSCFG_COMP::SYSCFG_CFGR2, 0, 1, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR2Base> ;
    using FieldValues = SYSCFG_COMP_SYSCFG_CFGR2_LOCUP_LOCK_Values<SYSCFG_COMP::SYSCFG_CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SYSCFG_CFGR2Pack  = Register<0x40010018, 32, ReadWriteMode, SYSCFG_COMPSYSCFG_CFGR2Base, T...> ;

  struct SYSCFG_COMPCOMP_CSRBase {} ;

  struct COMP_CSR : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using COMP1EN = SYSCFG_COMP_COMP_CSR_COMP1EN_Values<SYSCFG_COMP::COMP_CSR, 0, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1_INP_DAC = SYSCFG_COMP_COMP_CSR_COMP1_INP_DAC_Values<SYSCFG_COMP::COMP_CSR, 1, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1MODE = SYSCFG_COMP_COMP_CSR_COMP1MODE_Values<SYSCFG_COMP::COMP_CSR, 2, 2, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1INSEL = SYSCFG_COMP_COMP_CSR_COMP1INSEL_Values<SYSCFG_COMP::COMP_CSR, 4, 3, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1OUTSEL = SYSCFG_COMP_COMP_CSR_COMP1OUTSEL_Values<SYSCFG_COMP::COMP_CSR, 8, 3, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1POL = SYSCFG_COMP_COMP_CSR_COMP1POL_Values<SYSCFG_COMP::COMP_CSR, 11, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1HYST = SYSCFG_COMP_COMP_CSR_COMP1HYST_Values<SYSCFG_COMP::COMP_CSR, 12, 2, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1OUT = SYSCFG_COMP_COMP_CSR_COMP1OUT_Values<SYSCFG_COMP::COMP_CSR, 14, 1, ReadMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP1LOCK = SYSCFG_COMP_COMP_CSR_COMP1LOCK_Values<SYSCFG_COMP::COMP_CSR, 15, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2EN = SYSCFG_COMP_COMP_CSR_COMP2EN_Values<SYSCFG_COMP::COMP_CSR, 16, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2MODE = SYSCFG_COMP_COMP_CSR_COMP2MODE_Values<SYSCFG_COMP::COMP_CSR, 18, 2, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2INSEL = SYSCFG_COMP_COMP_CSR_COMP2INSEL_Values<SYSCFG_COMP::COMP_CSR, 20, 3, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using WNDWEN = SYSCFG_COMP_COMP_CSR_WNDWEN_Values<SYSCFG_COMP::COMP_CSR, 23, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2OUTSEL = SYSCFG_COMP_COMP_CSR_COMP2OUTSEL_Values<SYSCFG_COMP::COMP_CSR, 24, 3, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2POL = SYSCFG_COMP_COMP_CSR_COMP2POL_Values<SYSCFG_COMP::COMP_CSR, 27, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2HYST = SYSCFG_COMP_COMP_CSR_COMP2HYST_Values<SYSCFG_COMP::COMP_CSR, 28, 2, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2OUT = SYSCFG_COMP_COMP_CSR_COMP2OUT_Values<SYSCFG_COMP::COMP_CSR, 30, 1, ReadMode, SYSCFG_COMPCOMP_CSRBase> ;
    using COMP2LOCK = SYSCFG_COMP_COMP_CSR_COMP2LOCK_Values<SYSCFG_COMP::COMP_CSR, 31, 1, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase> ;
    using FieldValues = SYSCFG_COMP_COMP_CSR_COMP2LOCK_Values<SYSCFG_COMP::COMP_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_CSRPack  = Register<0x4001001C, 32, ReadWriteMode, SYSCFG_COMPCOMP_CSRBase, T...> ;

} ;

#endif //#if !defined(SYSCFGCOMPREGISTERS_HPP)
