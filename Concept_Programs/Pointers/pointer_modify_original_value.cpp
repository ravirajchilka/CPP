#include <iostream>

int main() {

    int myvar = 45;
    int *mypointer = &myvar;
    
    std::cout <<"original myvar value: " << myvar << std::endl;
    std::cout <<"myvar address value: " << mypointer << std::endl;
    std::cout <<"myvar value after dereferenced: " << *mypointer << std::endl;
    *mypointer = 100; //setting new value of myvar using pointer
    std::cout <<"new myvar value: " << myvar << std::endl;

    return 0;
}



