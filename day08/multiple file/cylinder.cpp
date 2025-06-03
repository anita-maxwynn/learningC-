#include "cylinder.h"

Cylinder::Cylinder(double radius1, double height1) {
  radius = radius1;
  height = height1;
}

double Cylinder::volume() { return PI * radius * radius * height; }
void Cylinder::details() {
  cout << "radius : " << radius << endl;
  cout << "height : " << height << endl;
  cout << "volume:" << this->volume() << endl;
}
double Cylinder::get_radius() { return radius; }
double Cylinder::get_height() { return height; }
void Cylinder::set_radius(double a) { radius = a; }
void Cylinder::set_height(double a) { height = a; }