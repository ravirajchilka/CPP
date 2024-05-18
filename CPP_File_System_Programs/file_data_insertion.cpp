#include <iostream>
#include <fstream>
#include <cstdint>

int main() {
    std::string a = "T";
    std::string str = "some string";
    float val = 9.4;
    std::uint16_t nums = 30;

    std::ofstream outFile("testfile.txt");

    outFile << a <<" " << str <<" "<<val <<" "<< nums;
    // write 'T some string 9.4 30' to the testfile.txt
    outFile.close(); // flush the buffer and release the resources

    return 0;
}


