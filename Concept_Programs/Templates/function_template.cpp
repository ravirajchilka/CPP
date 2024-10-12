#include <iostream>

template <class T> T add(T& val1, T& val2)
{
  T result = val1 + val2;
  return result;
}


int main()
{
  int i = 10;
  int j = 30;
  float m = 2.5F;
  float n = 3.2F;

  std::cout << "Addition of i and j " << add(i,j) << std::endl;
  std::cout << "Addition of m and n " << add(m,n) << std::endl;

  return 0;
}

