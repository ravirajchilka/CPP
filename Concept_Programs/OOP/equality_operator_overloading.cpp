/*
We can not directly compare two class instances like c1 == c2 for this reason we would need 
equality operator overloading */

#include <iostream>
#include <string>
#include <cstdint>

class MyClass {

	private:
		std::uint16_t num;
    
	public:
		void input() {
		    std::cin >> num; // if num is uint8_t then it becomes char datatype and wont work
				     // with cin
		}

		bool operator == (MyClass x) {
		    if(num == x.num) {
				return 1;
		    } else {
				return 0;
		    }
		}
};


int main() {

    MyClass myclass1, myclass2;
    
    std::cout << "Enter 1st number: ";
    myclass1.input();

    std::cout << "Enter 2nd number: ";
    myclass2.input();

    if(myclass1 == myclass2) {
		std::cout << "Number 1 is equal to number 2" << std::endl;
    } else {
		std::cout << "Number 1 is not equal to number 2" << std::endl;
    } 

    return 0;
}





