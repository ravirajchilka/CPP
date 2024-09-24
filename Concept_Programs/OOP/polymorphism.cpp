#include <iostream>

class Coffee {

  public:
    
    void func(int x) {
      std::cout << "the value of x int is: " << x << std::endl;
    }

    void func(double x) {
      std::cout << "the value of x double is: " << x << std::endl;
    }

    void func(int x, int y) {
      std::cout << "the value of x int is: " << x << std::endl;
      std::cout << "the value of y int is: " << y << std::endl;
    }
};


int main() {

  Coffee myOrder;

  myOrder.func(12.5);
  myOrder.func(12);
  myOrder.func(23,1);


  return 0;

}

