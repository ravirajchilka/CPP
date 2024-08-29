#include <iostream>
#include <string>
#include <cstdint>

constexpr int SIZE = 10;

class safearray {
	private:
		int arr[SIZE];

	public:
		safearray() {
			for(int i = 0; i < SIZE; i++) {
				arr[i] = i;
			}
		}

		int &operator[](int i) {
			if(i < 0 || i >= SIZE) {
				std::cout << "Index out of range " << std::endl;
				return arr[0];
			}
			return arr[i];
		}
};

int main() {
    safearray sa;
    
    std::cout << "vlaue of subscript[2] is " << sa[2] << std::endl;
    std::cout << "vlaue of subscript[3] is " << sa[3] << std::endl;
       	
    return 0;
}

