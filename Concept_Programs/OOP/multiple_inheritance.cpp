#include <iostream>


class Mammal {

  public:
    Mammal() {
      std::cout << "Mammals can direct birth" << std::endl;
    };

    void test() {
    }
};


class WingedAnimal {

  public:
    WingedAnimal() {
      std::cout << "WingedAnimal can flap" << std::endl;
    }

    void test2() {
    
    }
};


class Bats: public Mammal, public WingedAnimal {};


int main() {

  Bats animal;

  return 0;
}


