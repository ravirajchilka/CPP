#include <iostream>
#include <cstdint>
#include <string>
#include <string_view>

void print_string(std::string_view st) {
    std::cout << st; 
    /*
        with string_view we dont construct string in the function so heap 
        memory allocation is avoided. And string_view is read only, cant modify st 
    */ 
}

int main() {
    auto str = std::string {"this is string, a large string!!!"};
    print_string(str);
    return 0;
};
