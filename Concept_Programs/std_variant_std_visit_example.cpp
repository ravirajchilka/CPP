#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <map>
#include <variant>

void showRecords(std::vector<std::map<std::string,std::variant<std::string,std::uint16_t,float>>>& vec) {
    for(const auto& item:vec) {
        for(const auto& [key,value]:item) {
            std::cout<< key;
            std::visit([](const auto& val){
                std::cout << " " << val << std::endl;
            },value); 
        }
        std::cout << "-----------------" << std::endl;
    }
}

int main() {
    auto recordsVec = std::vector<std::map<std::string,std::variant<std::string,std::uint16_t,float>>>{};
    
    auto studentDetailsMap_1 = std::map<std::string,std::variant<std::string,std::uint16_t,float>>{};
    studentDetailsMap_1.emplace("Name","John");
    studentDetailsMap_1.emplace("Age",std::uint16_t{30U});
    studentDetailsMap_1.emplace("ID","A123");
    studentDetailsMap_1.emplace("Grade","A");
    studentDetailsMap_1.emplace("Score",3.1F);

    auto studentDetailsMap_2 = std::map<std::string,std::variant<std::string,std::uint16_t,float>>{};
    studentDetailsMap_2.emplace("Name","Timothy");
    studentDetailsMap_2.emplace("Age",std::uint16_t{26U});
    studentDetailsMap_2.emplace("ID","A467");
    studentDetailsMap_2.emplace("Grade","B+");
    studentDetailsMap_2.emplace("Score",3.3F);

    recordsVec.push_back(studentDetailsMap_1);
    recordsVec.push_back(studentDetailsMap_2);

    showRecords(recordsVec);

    
    return 0;
}





