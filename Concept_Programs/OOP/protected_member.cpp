#include <iostream>
#include <string>

class Vehicle {
  protected:
    std::string color;

  public:
    std::string brand = "Tesla";

    void honk() {
      std::cout << "you called my car";
    }
};

class Car : public Vehicle {
  std::string color = std::string {"red"};
  public:
    std::string model = "2022";
};


int main() {
    
  Car car;
  car.honk();
  std::cout << " " << car.brand << " " << car.model;
  
  return 0;
}
