#include <iostream>
#include <string>
#include <cstdint>

class Count {
	private:
	    uint16_t value;	

	public: 
	    Count():value(5) {}

	    void operator ++() {
		    ++value;
	    }

	    void display() {
		    std::cout << "Count " << value << std::endl;
	    }

};

int main() {
	
    Count obj;
    ++obj;
  
    obj.display(); 
    obj.display(); 
	
    return 0;
}


