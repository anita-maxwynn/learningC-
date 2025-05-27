#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
using namespace std;

#include "constant.h"
class Cylinder {
private:
  double radius;
  double height;

public:
  Cylinder() {
    radius = 1.0;
    height = 1.0;
  }
  Cylinder(double radius1, double height1);
  double volume();
  void details();
  double get_radius();
  double get_height();
  void set_radius(double a);
  void set_height(double a);
};

#endif