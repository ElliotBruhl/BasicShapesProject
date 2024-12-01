#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "BasicShape.hpp"

class Circle : public BasicShape {
private:
  double xCenter;
  double yCenter;
  double radius;
public:
  void calcArea() override {
    setArea(3.14159 * radius * radius);
  }
  Circle(double x, double y, double r, std::string n = "Circle") {
    xCenter = x;
    yCenter = y;
    radius = r;
    setName(n);
    calcArea();
  }
  double getXCenter() {
    return xCenter;
  }
  double getYCenter() {
    return yCenter;
  }
  double getRadius() {
    return radius;
  }
};

#endif