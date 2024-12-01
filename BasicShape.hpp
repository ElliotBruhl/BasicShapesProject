#ifndef BASICSHAPE_HPP
#define BASICSHAPE_HPP
#include <string>

class BasicShape {
private:
  double area;
  std::string name;
public:
  double getArea() {
    return area;
  }
  std::string getName() {
    return name;
  }
  void setArea(double a) {
    area = a;
  }
  void setName(std::string n) {
    name = n;
  }
  virtual void calcArea() = 0;
};

#endif