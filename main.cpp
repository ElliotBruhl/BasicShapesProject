#include <iostream>
#include "BasicShape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

int main() {
  BasicShape** shapes = new BasicShape*[5];
  shapes[0] = new Rectangle(3, 5, "Rect1");
  shapes[1] = new Rectangle(4, 7, "Rect2");
  shapes[2] = new Circle(5, 6, 3, "Circle1");
  shapes[3] = new Circle(7, 8, 2, "Circle2");
  shapes[4] = new Square(5);

  for (int i = 0; i < 5; i++) {
    std::cout << "Shape " << i+1 << ":\n\tName: " << shapes[i]->getName() << "\n\tArea: " << shapes[i]->getArea() << std::endl;
  }

  delete[] shapes;

  return 0;
}