#include <iostream>
#include <cstdint>

std::uint16_t test(const std::uint16_t &num) {
    //num++;
    return num;
}

int main() {
   
   std::uint16_t number = 50;
   // passing 40 shows error: cannot bind non-const lvalue reference of type uint16_t&
   // passing number works and also using const in function std::uint16_t test(const std::uint16_t &num) {
   // would work
   std::uint16_t val = test(140);
   std::cout << val;
   return 0;
}


