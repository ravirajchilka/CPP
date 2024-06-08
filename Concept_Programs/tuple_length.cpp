#include <cstdint>
#include <iostream>
#include <string>
#include <tuple>

int main() {

   std::tuple<int, double, std::string> myTuple(42, 3.14, "Hello");

    // Get the length of the tuple using std::tuple_size
    std::size_t length = std::tuple_size<decltype(myTuple)>::value;

    // Iterate through the tuple and display its values
    for (auto i = 0; i < length; i++) {
        std::cout << "Element " << i << ": " << std::get<i>(myTuple) << std::endl;
    }

    return 0;
};
