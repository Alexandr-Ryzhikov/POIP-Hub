#include "IVariable.hpp"

class Voltage : public IVariable
{
public:
  Voltage(float A, float B): IVariable(A, B, "Voltage") {} ;
};