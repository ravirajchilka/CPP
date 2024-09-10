#include <iostream>
#include <unistd.h>

enum class Traffic_light_states {
    GREEN,YELLOW,RED
};

int main() {
    Traffic_light_states s = Traffic_light_states::RED; 
    Traffic_light_states s1 = Traffic_light_states::GREEN;
    Traffic_light_states s2 = Traffic_light_states::YELLOW;

    std::cout << "Traffice State " << static_cast<int>(s)<<std::endl;
    usleep(1000000);
    std::cout << "Traffice State " << static_cast<int>(s1)<<std::endl;
    usleep(1000000);
    std::cout << "Traffic State "  << static_cast<int>(s2)<<std::endl;

    return 0; 

};
