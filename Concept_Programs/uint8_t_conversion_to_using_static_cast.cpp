#include <cstdint>
#include <iostream>

int main() {
	std::uint8_t n {65};
    n = 255; // n = 256 will show overflow error
    std::cout << static_cast<int>(n);

    return 0;
}
