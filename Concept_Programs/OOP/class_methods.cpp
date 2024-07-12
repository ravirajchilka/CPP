#include <iostream>
#include <cstdint>

class MyClass {

    public:
        void printText() {
            std::cout << "Hello world!";
        }

};

int main() {

    MyClass myclassObj;
    myclassObj.printText();

    return 0;

}

