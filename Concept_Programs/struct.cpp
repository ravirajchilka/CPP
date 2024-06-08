#include <iostream>
#include <unistd.h>
#include <cstdint>
#include <String>

enum class States {
    READ,WRITE
};

struct Machine { 
    States states;
    std::uint32_t id;
    std::string processor;
};
	
int main() {
    // below line works too
    //auto machine = Machine {.states = States::READ, .id = 59U, .processor = "ARM CORTEX A7"};
    Machine machine = {.states = States::READ, .id = 59U, .processor = "ARM CORTEX A7"};	
    std::cout << "Details" << std::endl;
    std::cout << " State: " << static_cast<int>(machine.states) << std::endl;
    std::cout << " ID: " << machine.id <<std::endl;
    std::cout << " Processor: " << machine.processor;
       
    return 0; 

};
