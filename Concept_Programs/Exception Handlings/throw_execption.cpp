#include <iostream>


int main() {

  try {
    int age = 15;
    if(age>=18) {
      std::cout << "Your eligibility to apply driving license" << std::endl;
    } else {
      throw 505; // throw exception     
    }
  }

  catch(int e) {
    std::cout << "You must be at least 18 to apply for the license" << std::endl;
    std::cout << "Error number: " << e << std::endl;
  }

  return 0;
  
}

