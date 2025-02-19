
#include <iostream>
#include <vector>
#include <vector>
#include <span>
#include <string>
#include <cstdint>
#include <utility>
#include <algorithm>
#include <tuple>
#include <map>


int main() {
	//std::uint16_t counter = 0;
	auto vec = std::vector<std::uint16_t>(10);

	// for each iteration counter value is added to the previously increamented value
	// generate is useful to fill up the vector or container with values
	// use mutable keyword if external counter variable is not declared
	std::generate(vec.begin(),vec.end(),[counter=0]()mutable->std::uint16_t{
		return counter +=100;
	});

	for_each(vec.begin(),vec.end(),[](auto& item)->void{
		std::cout << item << std::endl;
	});

	return 0;
}
