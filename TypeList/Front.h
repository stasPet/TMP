#ifndef DEFINE_FRONT
#define DEFINE_FRONT

#include "TypeList.h"

template< typename ... Elements >
struct FrontT;

template< typename Head, typename ... Elements >
struct FrontT < TypeList< Head, Elements ... > >
{
  using Type = Head;
};

template< typename ... Elements >
using Front = typename FrontT< Elements ... >::Type;

#endif