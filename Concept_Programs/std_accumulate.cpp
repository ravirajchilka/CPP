#include <iostream>
#include <array>
#include <vector>
#include <span>
#include <string>
#include <cstdint>
#include <utility>
#include <algorithm>
#include <tuple>
#include <map>
#include <numeric> 


int main() {
	
	auto vec = std::vector<uint16_t>{1,12,3,4,1,2,23,0};

	// find max value from array
	auto maxVal = std::accumulate(vec.begin(),vec.end(),vec[0],
		[](std::uint16_t a, std::uint16_t b)->std::uint16_t{
			return std::max(a,b);
	});

	std::cout << "max value " << maxVal << std::endl;



	// find min value from array
	auto minVal = std::accumulate(vec.begin(),vec.end(),vec[0],
		[](auto a, auto b)->std::uint16_t{
			return std::min(a,b);
	});

	std::cout << "max value " << minVal << std::endl;



	// string concatenation 
	auto stringValues = std::array<std::string,3>{"test ","going ","on"};

	// here std::string{""} takes initial value to concatenate with
	auto concatString = std::accumulate(stringValues.begin(),stringValues.end(),std::string{""},
		[](std::string resultedString,std::string currentStringItem)->std::string{
			return resultedString+currentStringItem;
	});

	std::cout<<concatString;

	return 0;
}

