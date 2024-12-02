#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square : public Rectangle {
private:
  double side;
public:
  Square(double s, std::string n = "Square") : Rectangle(s, s, n) { //pre: none. post: object is created with parameters given and area is calculated accordingly (with rectangle implementation)
    side = s;
  }
  double getSide() { //pre: none. post: side is returned.
    return side;
  }
};

#endif
