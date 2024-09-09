#include <iostream>
#include <string>

class Vehicle {
  public:
    std::string brand = "Tesla";

    void honk() {
      std::cout << "you called my car";
    }
};

class Car : public Vehicle {
  public:
    std::string model = "2022";
};


int main() {
    
  Car car;
  car.honk(); 
  std::cout << " " << car.brand << " " << car.model;
  
  return 0;
}


