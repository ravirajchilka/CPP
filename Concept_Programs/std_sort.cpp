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
            {"id",658U},
            {"score",145U}
        },
        {
            {"seriesC",123U},
            {"id",1658U},
            {"score",545U}
        },
    };

    //sorting in ascending order
    std::sort(vec.begin(),vec.end(),
        [](const std::map<std::string,std::uint16_t> &m1, const std::map<std::string,std::uint16_t> &m2){
            return m1.at("id")<m2.at("id");
    });
   
    for(const auto &item:vec) {
        for(const auto &item2:item) {
            std::cout << item2.first << " " << item2.second << std::endl;
        }
        std::cout<<"-----"<<std::endl;
    }

	return 0;
}

