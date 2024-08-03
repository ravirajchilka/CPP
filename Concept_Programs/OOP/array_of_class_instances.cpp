#include <iostream>
#include <string>
#include <cstdint>

class Student {

    std::uint8_t id;

    public:
	    void putData(const std::uint8_t &id);
};


void Student::putData(const std::uint8_t &val) {
    std::cout << "data entered " << static_cast<int>(val) << std::endl;
}


int main() {

    Student studentObj[5];	    
    
    for(std::uint8_t i=0;i<5;i++) {
	    studentObj[i].putData(i);
    }

    return 0;
 
}

