#include "RemoveConst.h"
#include "RemoveVolatile.h"

template< typename T >
struct RemoveCVT : RemoveConstT< typename RemoveVolatileT< T >::Type> {};

template< typename T >
using RemoveCV = typename RemoveCVT< T >::Type;