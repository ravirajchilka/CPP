#include <iostream>
#include <cstdint>

struct Ts {
    uint16_t num;
    float num2;
    /* data */
};

int main() {    
    Ts ts = {
    .num = 50,
    .num2 = 40.30
   };

    auto &[a,b] = ts; // structured binding, its similar to JS destructuring 
    std::cout << a << std::endl;
    std::cout << b+10; 
    
   return 0;
}


