#include <iostream>
#include <cstdint>
#include <string>

int main() {
    std::string name = "john";
    const auto indx1 = name.find("j",0);
    std::cout << std::boolalpha << (indx1 == std::string::npos);// prints false and npos shows hight value for string
    return 0;
};

