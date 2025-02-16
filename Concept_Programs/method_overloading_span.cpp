#include <array>
#include <cstdint>
#include <iostream>
#include <vector>
#include <span>

void print_container_vals(std::span<const std::uint16_t> span) {
  for (const std::uint16_t val : span) {
        std::cout << "from span array " << val << std::endl;
    }
}

int main() {
    std::vector<std::uint16_t> my_vec = {1, 23, 3, 4, 5};
    std::array<std::uint16_t, 5U> my_arr = {150, 2, 3, 4, 5};

    print_container_vals(my_arr);
    print_container_vals(my_vec);

    return 0;
}
