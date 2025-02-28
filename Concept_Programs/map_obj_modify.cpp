
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

class Test {

	public:
		
		Test() = default;

		void returnMapObject(std::vector<std::map<std::string,std::uint16_t>> &vec,const std::pair<std::string,std::uint16_t> &modifiedObj) {
			std::transform(vec.begin(),vec.end(),vec.begin(),
			[&modifiedObj](std::map<std::string,std::uint16_t> &mapObj){
				if (mapObj.find(modifiedObj.first) != mapObj.end()) {
					mapObj[modifiedObj.first] = modifiedObj.second; // or mapObj["test"] = modifiedObj.second;
				}
				return mapObj;	
			});
		}
		
};

int main() {
   
	Test test;

	auto mapVec = std::vector<std::map<std::string,std::uint16_t>>{
		{
			{"test",54U},
			{"ID",31U}
		},
		{
			{"test",82U},
			{"ID",40U}
		}
	};

	const auto mypair = std::pair<std::string,std::uint16_t>{"test",5981U};

	test.returnMapObject(mapVec,mypair);

	  // Print out modified maps
	  for (const auto& mapObj : mapVec) {
        for (const auto& pair : mapObj) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }

    return 0;
}

