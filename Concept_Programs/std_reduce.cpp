#include <iostream>
#include <vector>
#include <cstdint>
#include <numeric>
#include <execution>

class Test {  // use reduce over accumulate when need to define execution policies such as ::seq,::par,::par_unseq etc.

    public:
        Test() = default;

		std::uint16_t returnMultiplication(const std::vector<std::uint16_t> &vec) {
			auto mult = std::reduce(std::execution::seq,vec.begin(),vec.end(),std::uint16_t{1},
				[](auto acc, auto current) -> std::uint16_t {
					return acc*current;
				});
			return mult;	
		}

};


int main() {
    Test test;

	std::cout << test.returnMultiplication({1,2,3,4,5});

    return 0;
}
