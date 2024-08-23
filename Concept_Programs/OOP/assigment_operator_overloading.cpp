#include <iostream>
#include <string>
#include <cstdint>

class Complex {
	private:
	uint16_t real, img;	

	public: 
	    Complex(std::uint16_t r, std::uint16_t i) {
            real = i;
            img = i;
	    } 

	void operator = (const Complex &C) {
	    real = C.real;
	    img = C.img;
	}    

	void print() {
	    std::cout<<real<<"+i"<<img<<std::endl;
	}
};

int main() {
    Complex C1(5,8) , C2(4,6);
    std::cout << "C1 complex number";    
    C1.print();	
	
    return 0;
}

