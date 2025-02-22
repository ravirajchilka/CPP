#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <algorithm>
#include <map>


int main() {

    auto vec = std::vector<std::map<std::string,std::uint16_t>>{
        {
            {"serieaseA",123U},
            {"id",4658U},
            {"score",435U}
        },
        {
            {"seriesB",123U},
            {"id",4658U},
            {"score",145U}
        },
        {
            {"seriesC",123U},
            {"id",4658U},
            {"score",545U}
        },
    };

    // vec.erase(vec.begin()+2); // delete last record which is at index 2
	
	// modifying the vector records using for_each
     std::for_each(vec.begin(),vec.end(),
        [](std::map<std::string,std::uint16_t>& vecMap)->void{
            std::for_each(vecMap.begin(),vecMap.end(),
            [](std::pair<const std::string,std::uint16_t>&p)->void{
                if(p.first=="score" && p.second == 545U) {
                    p.second = 20U;
                }
                std::cout << p.first << " " << p.second << std::endl;
            });
            std::cout << "--==--" << std::endl;
    });

	return 0;
}

