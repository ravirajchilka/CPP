#include <iostream>
#include <string>
#include <cstdint>

class BinaryNum {
	uint16_t num1, num2;	

	public: 
	    // Constructor to initialize the numbers
	    BinaryNum() : num1(0), num2(0) {}

	    // Method to input a number
	    void input(const std::string& n) {
            std::cout << "Enter the " << n << ": ";
            std::cin >> num1;  // Store the input in num1
	    }    
	    
	    // Overloading the binary + operator to add 2 numbers
	    BinaryNum operator + (const BinaryNum& ob) {
            // Create an object
            BinaryNum A;
            // Assign the values to this object
            A.num1 = num1 + ob.num1;
            return A;
	    }

	    // Method to print the result
	    void print() const {
		    std::cout << "The sum of 2 numbers: " << num1 << std::endl;
	    }
};

int main() {
    BinaryNum num1, num2, res;
    num1.input("First");
    num2.input("Second");
    res = num1 + num2;
    res.print();
    return 0;
}


