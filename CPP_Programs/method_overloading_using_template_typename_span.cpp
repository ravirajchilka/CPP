#include <iostream>
#include <cstdint>
#include <vector>
#include <array>
#include <span>

template<typename T>
void print_arrs(std::span<T> span) {
    for(const auto item:span) {
        std::cout << item <<std::endl;
    }
}

int main() {
    auto vec = std::vector<std::uint32_t>{4,5,6};
    auto arr = std::array<std::uint16_t,4U> {1,5,9,8};
    
    print_arrs<std::uint32_t>(vec);
    print_arrs<std::uint16_t>(arr);
        
    return 0;
};
