#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <string_view>

std::uint8_t write_to_file(std::string_view filename,const std::string_view &text) {
    auto file = std::ofstream{};
    file.open(filename.data(),std::ios::out);
    if(file.fail()) {
        return static_cast<int>(1);
    }
    file << text << '\n'; // write text to file and add newline each time
    if(!file.good()) {
        return 1;
    }
    return 0;
}

int main() {
    const auto text = std::string {"this is text sample!!!!"};
    const auto filename1 = std::string {"text.bin"};
    write_to_file(filename1,text);
    return 0;
};



