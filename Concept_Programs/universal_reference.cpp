// Example 1
#include <iostream>
#include <vector>
#include <cstdint>
#include <numeric>

class Test {

    public:
        Test() = default;

        std::uint16_t returnSum(const std::vector<std::uint16_t> &vec) {
           auto sum = std::accumulate(vec.begin(),vec.end(),std::uint16_t{0}, // Explicitly specify std::uint16_t as the accumulator type
				[](auto acc, auto current){
                	return acc+current;
            });
			return sum;	
        }       

};


int main() {
    Test test;

    std::cout << test.returnSum({1,3,100});

    return 0;
}



// Example 2

#include <iostream>
#include <vector>
#include<cstdint>

//universal reference to take rvalue in a function argument
void printVals(auto &&vec) {
    for (const auto &item : vec) {
        std::cout << item << std::endl;
    }
}

int main() {
  
    printVals(std::vector<std::uint16_t>{7,8,19,5}); // rvalue
    
    return 0;
}
