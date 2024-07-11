#include <iostream>
#include <string>
#include <cstdint>

class SomeClass {

    public:
        std::uint16_t num;
        std::string string;

};

int main() {
    SomeClass myclass;
    myclass.num = 22;
    myclass.string = "some test string";

    std::cout << myclass.num << std::endl;
    std::cout << myclass.string << std::endl;

    return 0;
}

