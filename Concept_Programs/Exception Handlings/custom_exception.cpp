#include <exception>
#include <iostream>

class MyCustomException : public std::exception 
{
    public:
        const char* what() {
            std::cout << "My custom C++ exception" << std::endl;
            return 0;
        }

};


int main() 
{
    try {
      throw MyCustomException();
    }
    catch(const MyCustomException& mce) {
      std::cout << "Catch mycstom exception" << std::endl;
      std::cout << mce.what();
    }


    return 0;
}

