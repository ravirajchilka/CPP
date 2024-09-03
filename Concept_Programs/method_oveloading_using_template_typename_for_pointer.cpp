#include <iostream>
#include <string>

template<typename T>
void printData(const T &value) {
    std::cout << "Value: " << *value << std::endl;
}

int main() {
    int num = 5;
    char letter = 'A';

    printData(&num);     // Calls printData with an int
    printData(&letter);  // Calls printData with a char

    return 0;
}

