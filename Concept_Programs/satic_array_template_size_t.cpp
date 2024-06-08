#include <iostream>
#include <array>
#include <cstdint>

template <std::size_t N>
void print_array(std::array<size_t,N> const arr) {
    for(size_t i = 0; i<arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    };
};

int main() {
    constexpr static size_t len = {5};
    auto some_array =  std::array<std::size_t,len>{1,2,3,4,50};
    print_array(some_array);
    return 0;
};






