#ifndef DEFINE_POP_FRONT
#define DEFINE_POP_FRONT

#include "TypeList.h"

template< typename Elements >
struct PopFrontT;

template< typename Head, typename ... Elements >
struct PopFrontT < TypeList< Head, Elements ... > >
{
  using Type = TypeList< Elements ... >;
};

template< typename ... Elements >
using PopFront = typename PopFrontT< Elements ... >::Type;

#endif