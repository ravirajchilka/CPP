#include <iostream>
#include <vector>
#include <cstdint>
#include <array>

void print_container_vals(std::vector<uint16_t> &ar) {
    for(const uint16_t val : ar) {
        std::cout << "from vector " << val << std::endl;
    };
};

template <std::size_t N>
void print_container_vals(std::array<std::size_t,N> &ar) {
      for(const size_t val : ar) {
        std::cout << "from array " << val << std::endl;
    };
};

int main() {

    std::vector<std::uint16_t> my_vec = std::vector<std::uint16_t> {1,2,3,4,5};
    std::array<std::size_t,5U> my_arr = std::array<std::size_t,5U> {1,2,3,4,5};

    print_container_vals(my_arr);
    print_container_vals(my_vec);

    return 0;
};
