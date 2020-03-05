#ifndef IVARIABLE_HPP
#define IVARIABLE_HPP

class IVariable
{
private:
  const float AV = 0.0F;
  const float BV = 0.0F;
  float Value = 0.0F;  

  const char* Name = "Variable       " ; 
public:
  IVariable(float A, float B, const char* str): AV(A), BV(B), Name(str) 
  {
  };
   
  float GetValue()
  {
    return Value ;
  }
  
  virtual void Calculate(uint32_t code)
  {
     Value = code * AV + BV ;
  }
  
  const char* GetName()
  {
     return Name;
  }
  
};

#endif