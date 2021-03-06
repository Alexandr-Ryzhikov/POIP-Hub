/*******************************************************************************
* Filename      : tim10registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM10REGISTERS_HPP)
#define TIM10REGISTERS_HPP

#include "tim10fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM10
{
  struct TIM10CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014400, 32, ReadWriteMode>
  {
    using CKD = TIM_CR_CKD_Values<TIM10::CR1, 8, 2, ReadWriteMode, TIM10CR1Base> ;
    using ARPE = TIM_CR_ARPE_Values<TIM10::CR1, 7, 1, ReadWriteMode, TIM10CR1Base> ;
    using URS = TIM_CR_URS_Values<TIM10::CR1, 2, 1, ReadWriteMode, TIM10CR1Base> ;
    using UDIS = TIM_CR_UDIS_Values<TIM10::CR1, 1, 1, ReadWriteMode, TIM10CR1Base> ;
    using CEN = TIM_CR_CEN_Values<TIM10::CR1, 0, 1, ReadWriteMode, TIM10CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014400, 32, ReadWriteMode, TIM10CR1Base, T...> ;

  struct TIM10DIERBase {} ;

  struct DIER : public RegisterBase<0x4001440C, 32, ReadWriteMode>
  {
    using CC1IE = TIM_DIER_CCIE_Values<TIM10::DIER, 1, 1, ReadWriteMode, TIM10DIERBase> ;
    using UIE = TIM_DIER_UIE_Values<TIM10::DIER, 0, 1, ReadWriteMode, TIM10DIERBase> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001440C, 32, ReadWriteMode, TIM10DIERBase, T...> ;

  struct TIM10SRBase {} ;

  struct SR : public RegisterBase<0x40014410, 32, ReadWriteMode>
  {
    using CC1OF = TIM_SR_CCOF_Values<TIM10::SR, 9, 1, ReadWriteMode, TIM10SRBase> ;
    using CC1IF = TIM_SR_CCIF_Values<TIM10::SR, 1, 1, ReadWriteMode, TIM10SRBase> ;
    using UIF = TIM_SR_UIF_Values<TIM10::SR, 0, 1, ReadWriteMode, TIM10SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014410, 32, ReadWriteMode, TIM10SRBase, T...> ;

  struct TIM10EGRBase {} ;

  struct EGR : public RegisterBase<0x40014414, 32, WriteMode>
  {
    using CC1G = TIM_EGR_CCG_Values<TIM10::EGR, 1, 1, WriteMode, TIM10EGRBase> ;
    using UG = TIM_EGR_UG_Values<TIM10::EGR, 0, 1, WriteMode, TIM10EGRBase> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014414, 32, WriteMode, TIM10EGRBase, T...> ;

  struct TIM10CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using OC1M = TIM_CCMR_Output_OCM_Values<TIM10::CCMR1_Output, 4, 3, ReadWriteMode, TIM10CCMR1_OutputBase> ;
    using OC1PE = TIM_CCMR_Output_OCPE_Values<TIM10::CCMR1_Output, 3, 1, ReadWriteMode, TIM10CCMR1_OutputBase> ;
    using OC1FE = TIM_CCMR_Output_OCFE_Values<TIM10::CCMR1_Output, 2, 1, ReadWriteMode, TIM10CCMR1_OutputBase> ;
    using CC1S = TIM_CCMR_Output_CCS_Values<TIM10::CCMR1_Output, 0, 2, ReadWriteMode, TIM10CCMR1_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014418, 32, ReadWriteMode, TIM10CCMR1_OutputBase, T...> ;

  struct TIM10CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using IC1F = TIM_CCMR_Input_ICF_Values<TIM10::CCMR1_Input, 4, 4, ReadWriteMode, TIM10CCMR1_InputBase> ;
    using ICPCS = TIM_CCMR_Input_ICPCS_Values<TIM10::CCMR1_Input, 2, 2, ReadWriteMode, TIM10CCMR1_InputBase> ;
    using CC1S = TIM_CCMR_Input_CCS_Values<TIM10::CCMR1_Input, 0, 2, ReadWriteMode, TIM10CCMR1_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014418, 32, ReadWriteMode, TIM10CCMR1_InputBase, T...> ;

  struct TIM10CCERBase {} ;

  struct CCER : public RegisterBase<0x40014420, 32, ReadWriteMode>
  {
    using CC1NP = TIM_CCER_CCNP_Values<TIM10::CCER, 3, 1, ReadWriteMode, TIM10CCERBase> ;
    using CC1P = TIM_CCER_CCP_Values<TIM10::CCER, 1, 1, ReadWriteMode, TIM10CCERBase> ;
    using CC1E = TIM_CCER_CCE_Values<TIM10::CCER, 0, 1, ReadWriteMode, TIM10CCERBase> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014420, 32, ReadWriteMode, TIM10CCERBase, T...> ;

  struct TIM10CNTBase {} ;

  struct CNT : public RegisterBase<0x40014424, 32, ReadWriteMode>
  {
    using CNTField = TIM_CNT_CNT_Values<TIM10::CNT, 0, 16, ReadWriteMode, TIM10CNTBase> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014424, 32, ReadWriteMode, TIM10CNTBase, T...> ;

  struct TIM10PSCBase {} ;

  struct PSC : public RegisterBase<0x40014428, 32, ReadWriteMode>
  {
    using PSCField = TIM_PSC_PSC_Values<TIM10::PSC, 0, 16, ReadWriteMode, TIM10PSCBase> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014428, 32, ReadWriteMode, TIM10PSCBase, T...> ;

  struct TIM10ARRBase {} ;

  struct ARR : public RegisterBase<0x4001442C, 32, ReadWriteMode>
  {
    using ARRField = TIM_ARR_ARR_Values<TIM10::ARR, 0, 16, ReadWriteMode, TIM10ARRBase> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001442C, 32, ReadWriteMode, TIM10ARRBase, T...> ;

  struct TIM10CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM_CCR_CCR_Values<TIM10::CCR1, 0, 16, ReadWriteMode, TIM10CCR1Base> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014434, 32, ReadWriteMode, TIM10CCR1Base, T...> ;

} ;

#endif //#if !defined(TIM10REGISTERS_HPP)
