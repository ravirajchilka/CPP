#include <cstdint>
#include <iostream>
#include <string>


class A1 {

  public:
    A1() {
      std::cout << "constructor of the base class A1" << std::endl;
    }


};


class A2 {

  public:
    A2() {
      std::cout << "Constructor of the base class A2" << std::endl; 
    }

};

class S:public A1,public A2 {
  
    S() {
      std::cout << "Derived/child of the base claass S" << std::endl;
    }

};


int main() {

  S myobj;


}



