#include<iostream>
#include<stdlib.h>

int main() {

    auto x = 45.50;
    auto d = x; // need float type but auto can be used

    std::cout << d << std::endl;

    return 0;
}
