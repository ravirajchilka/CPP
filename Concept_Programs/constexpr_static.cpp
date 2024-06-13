#include <iostream>
#include<cstdint>

int main() {
    /*constexpr is more efficient because it evaluated at compile time
    when static keyword is used, without static keyword it wont gurantee
    that constexpr will be evaluated at compile time, it could be at runtime too */
    static constexpr std::uint16_t someval = std::uint16_t {250};	
    std::cout<<someval;	

    return 0;
}

