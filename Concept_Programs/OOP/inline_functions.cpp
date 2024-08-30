#include <iostream>
#include <string>
#include <cstdint>

inline uint16_t Max(uint16_t x, uint16_t y) {
    return (x > y) ? x : y;
}

int main() {
  	
    // Inline functions
	std::cout << "Max 20 and 30 what is the max one: " << Max(20,30) << std::endl;
	std::cout << "Max 20 and 0 what is the max one: " << Max(20,0) << std::endl;
	std::cout << "Max 20 and 300 what is the max one: " << Max(20,300) << std::endl;
		
    return 0;
}

