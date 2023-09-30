#include <cstdint>
#include <iostream>
#include <map>
#include <string>

void print_map(const std::map<std::string,std::uint16_t> &map) {
	for(const auto &[key, val] : map) {
		std::cout << key << val << std::endl;
	};
};

int main() {

	auto my_map= std::map<std::string,std::uint16_t> {{"jan", 28}};

    my_map["Sam"] = 40;
    my_map["Veronika"] = 50;

    // update value
    my_map["Sam"] = 41;

    if(!my_map.contains("Teresa")) {
        my_map["Teresa"] = 29;
    };

    const auto it_find = my_map.find("Lisa");
    if(it_find != my_map.end()) {
        my_map["Lisa"] = 80;
    }

    print_map(my_map);
    return 0;

}
