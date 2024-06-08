#include <iostream>
#include <cstdint>
#include <string>

int main() {
    std::string name = "john";
    const auto indx1 = name.find("j",0);
    std::cout << std::boolalpha << (indx1 == std::string::npos);
    /*npos shows highest value of size of string if value need to be find doesnt exist in the strin then indx1 set to hight possible size of string
    and can be obtain by std::string::npos and boolalpha basically converting it to boolean value*/
    return 0;
};
