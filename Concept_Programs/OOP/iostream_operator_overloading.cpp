/*
Basic std::cout behavior with classes:
You can use std::cout to print class details without overloading the << operator, but with some limitations:

Limitations without operator overloading:
    You need to access each member individually.
    This only works for public members.
    You can't directly use std::cout << p; to print the entire object.

Why operator overloading is still useful:
    While you can print class details without overloading <<, doing so offers several advantages:
    Encapsulation: You can print private members without exposing them.
    Consistency: You can use std::cout << object; just like with built-in types.
    Customization: You can format the output exactly as you want.
    Reusability: The same overloaded operator can be used anywhere in your code.

*/

#include <iostream>
#include <string>
#include <cstdint>

class Complex {

    private:
        std::int16_t real;
        std::int16_t imag;

    public:
	    Complex(std::int16_t r = 0, std::int16_t i = 0) : real(r), imag(i) {}

	friend std::ostream& operator << (std::ostream& out, const Complex &c);	
	friend std::istream& operator >> (std::istream& in,Complex &c);	
};

std::ostream& operator << (std::ostream &out, const Complex &c) {
    out << c.real;
    out << "+i" << c.imag << std::endl;
    return out;
}

std::istream& operator >> (std::istream &in, Complex &c) {
    std::cout << "Enter real part " << std::endl;
    in >> c.real;
    std::cout << "Enter imag part " << std::endl;
    in >> c.imag;
    return in;
}


int main() {

    Complex c1;	
    std::cin >> c1;
    std::cout << "The comple number is :" ;
    std::cout << c1;
    return 0;
}





