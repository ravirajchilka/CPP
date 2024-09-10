#include <iostream>
#include <iomanip>

static constexpr char KEY = 'X';
static constexpr char CLEARTEXT = 'A';

void print_char(char c, const char *text) {
    std::cout << text << "=" << c << " (0x" << std::hex 
    << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(c) << ")" << std::endl;
    return; 
};


int main() {
    char cleartext, key, ciphertext, newcleartext;

    cleartext = CLEARTEXT;
    print_char(cleartext, "cleartext");
    
    key = KEY;
    print_char(key,"key");
    
    ciphertext = cleartext ^ key;
    print_char(ciphertext, "ciphertext");
    
    newcleartext = ciphertext ^ key;
    print_char(newcleartext, "newcleartext");

    return 0;	
}


