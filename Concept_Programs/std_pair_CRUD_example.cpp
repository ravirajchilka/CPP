#include <iostream>
#include <vector>
#include <vector>
#include <span>
#include <string>
#include <cstdint>
#include <utility>
#include <algorithm>

class Pairs {
	public:
		Pairs() = default;

		void printPairs() {
			for(const auto& item:vec) {
				std::cout << item.first << item.second<<std::endl;
			}
		}

		void addPairs(const std::pair<std::string,std::uint16_t>& pair) {
			vec.push_back(pair);
		}

		void eraseRecords(const std::uint16_t& id) {
			std::cout << "after deletion --------" << std::endl;
			vec.erase(std::remove_if(vec.begin(),vec.end(),[id](const std::pair<std::string,std::uint16_t>& pair){
				if(pair.second == id) {
					return true;
				} else {
					return false;
				}
			}), vec.end());
		}

	private:
		 std::vector<std::pair<std::string,std::uint16_t>> vec = std::vector<std::pair<std::string,std::uint16_t>>{};	

};	


int main() {
	const auto p1 = std::pair<std::string,std::uint16_t>{"ID1",845U};
	const auto p2 = std::pair<std::string,std::uint16_t>{"ID2",405U};
	const auto p3 = std::pair<std::string,std::uint16_t>{"ID3",145U};
	const auto p4 = std::pair<std::string,std::uint16_t>{"ID4",5U};

	Pairs pairs;
	pairs.addPairs(p1);
	pairs.addPairs(p2);
	pairs.addPairs(p3);
	pairs.addPairs(p4);

	pairs.printPairs();

	pairs.eraseRecords(405U);
	pairs.printPairs();


	return 0;
}
