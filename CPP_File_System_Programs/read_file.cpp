#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream infile;
    infile.open("testfile.txt");

    std::string file_buffer;

    // below code would work too!
    // while(std::getline(infile,somestr)) {
    //     std::cout <<"printed values are\n" << somestr <<std::endl;
    // }
     while(infile.good()) {
          std::getline(infile,file_buffer);
          std::cout << file_buffer;
    }


    infile.close();
    return 0;
}
