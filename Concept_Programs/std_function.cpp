#include <iostream>
#include <functional>

int main() {
    std::function<void(const std::string&)> print = [](const std::string& msg) {
        std::cout << msg << std::endl;
    };

    print("This is a shortcut for std::cout!");
	print("testing");
    
	return 0;
}
