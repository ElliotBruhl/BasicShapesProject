#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "BasicShape.hpp"

class Rectangle : public BasicShape {
private:
  double length;
  double width;
public:
  void calcArea() override {
    setArea(length * width);
  }
  Rectangle(double l, double w, std::string n = "Rectangle") {
    length = l;
    width = w;
    setName(n);
    calcArea();
  }
  double getLength() {
    return length;
  }
  double getWidth() {
    return width;
  }
};

#endif