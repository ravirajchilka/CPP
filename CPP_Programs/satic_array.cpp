#include <iostream>
#include <array>

int main()
{
    //C++ style static array
   std::array<std::uint32_t,5> some_array = std::array<std::uint32_t,5> {1,2,3,4,5};
   
    for(uint32_t i = 0; i< some_array.size(); i++) {
        std::cout << some_array[i] << std::endl;
    }
   
    return 0;
}
