#include <iostream>

template <class X, class Y> void func(X a, Y b)
{
  std::cout<<"value of a is: " << a << std::endl;
  std::cout<<"value of b is: " << b << std::endl;
}

int main()
{

  func(25,45.6); 
  return 0;
}


