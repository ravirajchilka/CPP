#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream infile;
    infile.open("testfile.txt");

    std::string somestr;

    while(std::getline(infile,somestr)) {
        std::cout <<"printed values are\n" << somestr <<std::endl;
    }

    infile.close();
    return 0;
}
