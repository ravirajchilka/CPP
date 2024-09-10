#include <iostream>
#include <cstdint>

void add(float a, float b) {
    std::cout << "Addition " << a+b << std::endl;
}    

void subtract(float a, float b) {
    std::cout << "Subtraction: " << a-b << std::endl;
}

void multiply(float a, float b) {
    std::cout << "Multiplication: " << a*b << std::endl;

}

void divide(float a, float b) {
    if(b>0) {
	std::cout << "Division: " << a/b << std::endl;
    } else {
	std::cout << "Error in division" << std::endl;
    }
}

int main() {
    
    float a;
    float b;

    char op;

    std::cout << "Enter num a" << std::endl;
    std::cin >> a;
    std::cout << "Enter num b" << std::endl;
    std::cin >> b;
    std::cout << "Enter operation " << std::endl;
    std::cin >> op;

    switch(op) {
        case '+': add(a,b);
            break;
        case '-': subtract(a,b);
            break;
        case '*': multiply(a,b);
            break;
        case '/': divide(a,b);		  
            break;
        default: std::cout << "Invalid operator" << std::endl;		  
    } 

    return 0;

}