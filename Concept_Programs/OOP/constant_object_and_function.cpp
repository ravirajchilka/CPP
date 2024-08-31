#include <iostream>
#include <string>
#include <cstdint>

class Animal {
    public:
    	std::string name;
	    std::string breed;

        Animal(std::string name, std::string breed) {
            this->name = name;
            this->breed = breed;
        }
};

int main() {
    // Constant object and functions
    // object creation
    const Animal obj("Hutch", "puppy"); // const keyword makes it immutable obj.name = "value" wont work
    std::cout << obj.name << "dog is " << obj.breed << std::endl;    
    return 0;
}
