#ifndef BASICSHAPE_HPP
#define BASICSHAPE_HPP
#include <string>

class BasicShape {
private:
  double area;
  std::string name;
public:
  double getArea() { //pre: none. post: returns area.
    return area;
  }
  std::string getName() { //pre: none. post: returns name.
    return name;
  }
  void setArea(double a) { //pre: none. post: sets area to value given.
    area = a;
  }
  void setName(std::string n) { //pre: none. post: sets name to value given.
    name = n;
  }
  virtual void calcArea() = 0; //pre: must be implemented in non-abstract children. post: calculates area (specific to each shape).
};

#endif
