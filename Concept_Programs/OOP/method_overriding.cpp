#include <iostream>

class Vehicle {
  public:
    void print() {
      std::cout << "Base class function" << std::endl;
    }   
};


class Car: public Vehicle {
  public:
    void print() {
      std::cout << "Child class function" << std::endl;
    }
};


int main() {

  // function overriding
  Vehicle obj;
  obj.print();
    
  Car obj1;
  obj1.print();

  return 0;

}




