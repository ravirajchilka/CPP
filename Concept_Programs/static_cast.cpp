#include<iostream>
#include<stdlib.h>

struct User {
    std::uint16_t age;
    std::string name;
    std::uint16_t score;
};

int main() {

    User user1 = {.age = 59U,.name = "superman",.score = 1000U}; // C++ 20 Feature
    std::cout << static_cast<std::uint16_t>(user1.age) << std::endl;
    std::cout << user1.name << std::endl;
    std::cout << (std::int16_t)user1.score << std::endl;

    return 0;
}
