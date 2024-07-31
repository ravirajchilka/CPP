#include <iostream>
#include <string>

class Table {

    public:
	    Table(double l = 2.0, double b = 2.0, double h = 2.0) {
		    std::cout << "Constructor is called" << std::endl;
		    length = l;
		    breadth = b;
		    height = h;
	    }

	    double Volume() {
		return length*breadth*height;
	    }

    private:
	    double length;
	    double breadth;
	    double height;
};

int main() {

    Table Table1(4.3,5.6,2.5); // Table1 is object
    
    Table *ptrTable; // declaration of pointer to class
    
    ptrTable = &Table1;
    // now access the class memebrs using pointer using access -> operator
    std::cout << "Volume of table is: " << ptrTable->Volume();
}