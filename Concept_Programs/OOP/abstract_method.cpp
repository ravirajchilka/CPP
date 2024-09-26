#include <iostream>

class Shape {

  protected:
    float dimension;

  public: 
    void getDimensions() {
      std::cin >> dimension;
    }

    virtual float calculateArea() = 0;
};


class Circle : public Shape (
    public:
      float calculateArea() {
        return 3.14 * dimension * dimension;
      }
};


class Square : public Shape (
    public:
      float calculateArea() {
        return dimension * dimension;
      }
};


int main() {

  return 0;

}




