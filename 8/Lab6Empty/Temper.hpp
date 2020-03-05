#include "IVariable.hpp"

class Temperature : public IVariable
{
  public:
  Temperature(float A, float B): IVariable(A, B, "Temperature") {} ;

};