#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

class Test {

	public:
		
		Test() = default;

		std::pair<std::string,std::uint16_t>returnPairs(const auto &vec, auto &index) {
			return vec[index];
		}
		
};

int main() {
   
	Test test;

	auto vecOfpairs = std::vector<std::pair<std::string,std::uint16_t>>{
		{"ID",252U},
		{"ID",242U},
		{"ID",232U},
		{"ID",222U},
		{"ID",122U},
	};
	
	for(std::uint8_t i=0;i<vecOfpairs.size();++i) {
		std::cout<<test.returnPairs(vecOfpairs,i).first << " " << test.returnPairs(vecOfpairs,i).second << std::endl;
	}

    return 0;
}

