#include <iostream>
#include <cstdint>
#include <vector>

#include "dtypes.h"

void print_val(const auto &vect) {
    for(const dtypes::ubyte item:vect) {
        std::cout<< dtypes::ctob(item) << std::endl;
    }
}

int main() {
    auto vec = std::vector<dtypes::ubyte> {4,5,255}; // can't add values greater than 255
    print_val(vec);
    // i<dtypes::ctob(256) line checks for ubyte limit
    // can't add values greater than 255
    for(dtypes::ubyte i = 0;i<dtypes::ctob(255);i++) { 
       std::cout << dtypes::ctob(i)<< std::endl;
    }

    return 0;
};
