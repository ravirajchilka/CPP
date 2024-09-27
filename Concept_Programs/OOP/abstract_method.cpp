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


class Circle : public Shape {
  public:
      float calculateArea() {
          return 3.14 * dimension * dimension;
      }
  };

  class Square : public Shape {
  public:
      float calculateArea() {
          return dimension * dimension;
      }
};


int main() {
    Circle circle;
    Square square;

    std::cout << "Enter the radius of the circle: " << std::endl;
    circle.getDimensions();
    
    std::cout << "Area of circle is: " << circle.calculateArea() << std::endl;

    std::cout << "Enter the side length of the square: " << std::endl;
    square.getDimensions();
    
    std::cout << "Area of square is: " << square.calculateArea() << std::endl;

    return 0;
}


