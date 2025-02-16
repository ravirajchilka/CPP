#include <cstdint>
#include <iostream>
#include <string>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple(42, 3.14, "Hello");

    // Get the length of the tuple using std::tuple_size
    constexpr std::size_t length = std::tuple_size_v<decltype(myTuple)>;

    // Iterate through the tuple and display its values
    [&]<std::size_t... I>(std::index_sequence<I...>) {
        ((std::cout << "Element " << I << ": " << std::get<I>(myTuple) << std::endl), ...);
    }(std::make_index_sequence<length>{});

    return 0;
}

