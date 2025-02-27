
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <random>


int main() {
	
	std::random_device rd;
	std::mt19937 gen(rd());
	std::normal_distribution<>dist(0,10);

	auto generatedNums = dist(gen);

	auto newVec = std::vector<uint8_t>(10);

	std::generate(std::execution::seq,newVec.begin(),newVec.end(), // ::par is not thread safe for mt19937 so better to use ::seq
		[&dist,&gen]() -> std::uint8_t {
			return static_cast<std::uint8_t>(dist(gen));
	});

	for(const auto &item:newVec) {
		std::cout << static_cast<int>(item) << std::endl;
	}
	
	return 0;
}
