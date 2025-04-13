#include <iostream>
#include <vector>
#include <vector>
#include <span>
#include <string>
#include <cstdint>
#include <utility>
#include <algorithm>
#include <tuple>


int main() {

	const auto mytuple = std::tuple<std::uint16_t,std::string,float>(132U,"john",5.3F);
	
	//Use unpacking method std::apply only for the tuples
	std::apply([](auto&&... items){
		((std::cout<<items<<std::endl),...);
	},mytuple);
	
	return 0;
}
