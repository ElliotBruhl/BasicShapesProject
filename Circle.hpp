#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "BasicShape.hpp"

class Circle : public BasicShape {
private:
  double xCenter;
  double yCenter;
  double radius;
public:
  void calcArea() override { //pre: none. post: calculates area with formula A=pi*r^2
    setArea(3.14159 * radius * radius);
  }
  Circle(double x, double y, double r, std::string n = "Circle") { //pre: none. post: object is created with parameters given and area is calculated accordingly
    xCenter = x;
    yCenter = y;
    radius = r;
    setName(n);
    calcArea();
  }
  double getXCenter() { //pre: none. post: xCenter is returned.
    return xCenter;
  }
  double getYCenter() { //pre none: post: yCenter is returned.
    return yCenter;
  }
  double getRadius() { // pre none: post: radius is returned.
    return radius;
  }
};

#endif
