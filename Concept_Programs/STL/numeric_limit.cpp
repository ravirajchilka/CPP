/*numeric_limits is used to find the lower and upper limit of arithmetic data type*/

#include <iostream>
#include <limits>
#include <cstdint>

int main() {

    std::cout << "Minimum int value: " << std::numeric_limits<uint16_t>::min() << std::endl;
    std::cout << "Maximum int value: " << std::numeric_limits<uint16_t>::max() << std::endl;
    
    return 0;

}
