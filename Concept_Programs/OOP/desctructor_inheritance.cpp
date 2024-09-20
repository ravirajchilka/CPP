#include <iostream>


class A1 {

  public:
    A1() {
      std::cout << "Constructor of the base class A1" << std::endl; 
    }

    ~A1() {
      
      std::cout << "Desctructor called" << std::endl; 
    }

};



int main() {

  // Destructor -- inheritance
  
  A1 obj, A,B, D;
   
  return 0;


}
