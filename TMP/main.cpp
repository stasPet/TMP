#include <iostream>
#include <array>

template< typename �, std::size_t N >
struct DotProductT
{
  static inline � result( � const * a, � const * b )
  {
    return *a * *b + DotProductT< �, N - 1 >::result( a + 1, b + 1 );
  }
};

// ��������� ������������� � �������� �������� ���������
template< typename � >
struct DotProductT< �, 0 >
{
  static inline � result( � const *, � const * )
  {
    return �{};
  }
};

template< typename �, std::size_t N>
auto dotProduct(std::array< �, N > const & x, 
                std::array< �, N > const & y)
{
  return DotProductT< �, N >::result( x.data(), y.data() );
}


int main()
{
  auto a { &"1" };
  auto b { &"1" };

  return 0;
}