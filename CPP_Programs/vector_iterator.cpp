
#include <iostream>
#include <vector>
#include <cstdint>

int main() {

    std::vector<std::uint16_t> my_ar = std::vector<std::uint16_t>{1,2,3,4,5};
    std::vector<std::uint16_t>::iterator begin = my_ar.begin();
    std::vector<std::uint16_t>::iterator end = my_ar.end();

    // insert 5000 at index 2
    my_ar.insert(my_ar.begin()+2,5000);

    for(uint16_t i = 0; i< my_ar.size(); i++) {
        std::cout << my_ar[i] << std::endl;
    }

    return 0;
};
