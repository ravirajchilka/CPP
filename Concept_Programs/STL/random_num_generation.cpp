#include <iostream>
#include <cstdint>
#include <random>
#include <vector>

static constexpr auto NUM_ELEMENTS = 1000000U;

int main() {
    auto my_vector = std::vector<std::int32_t> {NUM_ELEMENTS,0U};

    // generation parameters
    auto seed = std::random_device{};
    auto gen = std::mt19937{seed()};
    auto dist = std::uniform_int_distribution<std::int32_t> {-10,10};

    for(auto &val: my_vector){
	    val = dist(gen);	    
    }
    	
    for(std::size_t i=0;i<10;i++) {
	    std::cout << my_vector[i] << std::endl;
    }

    return 0;
}



