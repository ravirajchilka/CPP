#include <iostream>
#include <cstdint>

class Car {
    
    public:

        static std::uint8_t a;
        
        static std::int8_t func() {
             a++;
             return a;
        }
};

std::uint8_t Car::a = 1;

int main() {

    Car obj;
    // a is shared in the below 2 functions calls so a is incremented twice and 
    //  2 then 3
    std::cout << static_cast<int> (obj.func()) << std::endl; // output 2
    std::cout << static_cast<int> (obj.func()); // output 3

    return 0;

}
