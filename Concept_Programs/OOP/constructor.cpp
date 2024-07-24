#include <iostream>
#include <string>

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

    const Animal animalObj("Hutch","puppy");
    std::cout << animalObj.name << " dog is a " << animalObj.breed << std::endl;

    // animalObj.name = "Dog1"; is not allowed 

    return 0;
}

