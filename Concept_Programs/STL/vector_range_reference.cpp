#include <iostream>
#include <vector>
#include <cstdint>

int main() {
    uint16_t count = {0};
    std::vector<std::uint32_t> my_arr = std::vector<std::uint32_t>{};

    while (count<=20) {
        my_arr.push_back(count);
        count++;
    };

    // using C style
    for (uint32_t i = 0;i< my_arr.size(); i++) {
        std::cout<< my_arr[i] << std::endl;
    };

   // using range
    for (const auto item: my_arr) {
        std::cout<< item << std::endl;
    }

    // changing original array using reference '&' keyword
    for (auto &item: my_arr) {
        item *= 2;
        std::cout << item <<std::endl;
    }
};
