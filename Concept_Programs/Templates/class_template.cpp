#include <iostream>

template <class T>
class Calc {

  public:
    T num1 = 15;
    T num2 = 10;

    void add() {
      std::cout << "Addition: " << num1 + num2 << std::endl;
    }
};


int main() {

  Calc<int> myObj;
  myObj.add();

  return 0;
}

