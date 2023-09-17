#include <iostream>
#include <array>
#include <cstdint>

template <std::uint32_t N>
void print_array(std::array<uint32_t,N> const arr) {
    for(uint32_t i = 0; i<arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    };
};

int main() {
    constexpr static uint32_t len = {5};
    auto some_array =  std::array<std::uint32_t,len>{1,2,3,4,50};
    print_array(some_array);
    return 0;
};



