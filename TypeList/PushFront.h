#ifndef DEFINE_PUSH_FRONT
#define DEFINE_PUSH_FRONT

#include "TypeList.h"

template< typename Elements, typename NewElement >
struct PushFrontT;

template< typename ... Elements, typename NewElement >
struct PushFrontT< TypeList< Elements ... >, NewElement >
{
  using Type = TypeList< NewElement, Elements ... >;
};

template< typename Elements, typename NewElement >
using PushFront = typename PushFrontT< Elements, NewElement >::Type;

#endif