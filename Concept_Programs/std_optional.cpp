#include <iostream>
#include <cstdint>
#include <optional>
#include <string>

// when return type is not mandatory or optional
std::optional<std::string> check(const bool flag) {
    if(flag) {
        return "some string";
    }
    return {};
}


int main() {
    std::cout << check(true).value() << std::endl;

    return 0;
}


