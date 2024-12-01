#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square : public Rectangle {
private:
  double side;
public:
  Square(double s, std::string n = "Square") : Rectangle(s, s, n) {
    side = s;
  }
  double getSide() {
    return side;
  }
};

#endif