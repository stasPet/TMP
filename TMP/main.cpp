#include <iostream>
#include <array>

template< typename Т, std::size_t N >
struct DotProductT
{
  static inline Т result( Т const * a, Т const * b )
  {
    return *a * *b + DotProductT< Т, N - 1 >::result( a + 1, b + 1 );
  }
};

// Частичная специализация в качестве критерия остановки
template< typename Т >
struct DotProductT< Т, 0 >
{
  static inline Т result( Т const *, Т const * )
  {
    return Т{};
  }
};

template< typename Т, std::size_t N>
auto dotProduct(std::array< Т, N > const & x, 
                std::array< Т, N > const & y)
{
  return DotProductT< Т, N >::result( x.data(), y.data() );
}


int main()
{
  auto a { &"1" };
  auto b { &"1" };

  return 0;
}