#include <iostream>
#include <cstdint>
#include <variant>
#include <string>

int main() {
    auto allDataTypes = std::variant<float, std::uint16_t, std::string>{static_cast<std::uint16_t>(42U)};
    
    allDataTypes = "test";   // Now holds std::string
    allDataTypes = 40.20F;   // Now holds float

    if (std::holds_alternative<float>(allDataTypes)) {
        std::cout << "Float: " << std::get<float>(allDataTypes) << std::endl;
    }
    if (std::holds_alternative<std::string>(allDataTypes)) {
        std::cout << "String: " << std::get<std::string>(allDataTypes) << std::endl;
    }
    
    return 0;
}
