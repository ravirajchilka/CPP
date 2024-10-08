#include <iostream>
#include <exception>
#include <string>

class MyCustomException : public std::exception 
{
  private:
      std::string message;

  public:
      MyCustomException(const std::string& msg = "Custom C++ Exception") : message(msg) {}

      const char* what() const noexcept override {
          return message.c_str();
      }
};


int main() 
{    
    try {
        throw MyCustomException("This is a custom exception");
    } catch (const MyCustomException& mce) {
        std::cout << "Caught MyCustomException: " << mce.what() << std::endl;
    }
    return 0;
}

