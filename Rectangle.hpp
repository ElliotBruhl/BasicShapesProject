#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "BasicShape.hpp"

class Rectangle : public BasicShape {
private:
  double length;
  double width;
public:
  void calcArea() override { //pre: none. post: area is calculated with A=l*w.
    setArea(length * width);
  }
  Rectangle(double l, double w, std::string n = "Rectangle") { //pre: none. post: object is created with parameters given and area is calculated accordingly.
    length = l;
    width = w;
    setName(n);
    calcArea();
  }
  double getLength() { //pre: none. post: length is returned.
    return length;
  }
  double getWidth() { //pre: none. post: width is returned.
    return width;
  }
};

#endif
