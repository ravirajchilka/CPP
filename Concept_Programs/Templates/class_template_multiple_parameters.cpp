#include <iostream>

template <class T1, class T2>
class Calc {
  T1 a;
  T2 b;

  public:
    Calc(T1 x, T2 y) {
      a = x;
      b = y;
    }  

    void show() {
      std::cout << "Two values are: " << a << ", " << b << std::endl;
    }
};


int main() {
  // Class Template
  Calc<int,float> myObj(34,45.6);
  myObj.show();

  return 0;
}


