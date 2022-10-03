#include "Decay.h"

int main()
{
  using TFC = void ( char, ... );
  using TF = void ( bool, bool );

  DecayT< TFC >::Type t1{};
  DecayT< TF >::Type t2{};

  return 0;
}