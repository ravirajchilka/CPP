#include <iostream>


int main() {

  try {
    int age = 15;
    if(age>=18) {
      std::cout << "Your eligibility to apply driving license" << std::endl;
    } else {
      throw (age);  // throw exception  
    }
  }

  catch(int e) {
    // handle the exception
    std::cout << "You must be at least 18 to apply for the license" << std::endl;
    std::cout << "Error! Your age is " << e << std::endl;
  }

  return 0;
}

