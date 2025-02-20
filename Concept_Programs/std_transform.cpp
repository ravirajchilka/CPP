
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
	
	auto vec = std::vector<std::uint16_t>{1,3,2,5,4};
	auto newVec = std::vector<std::uint16_t>(vec.size());

	std::transform(vec.begin(),vec.end(),newVec.begin(),[](auto& item)->std::uint16_t{
		return item += 400;
	});
	
	std::for_each(newVec.begin(),newVec.end(),[](auto& newVecItem)->void{
		std::cout<< newVecItem << std::endl;
	});

	return 0;
}
