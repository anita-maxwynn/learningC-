#include <iostream>
using namespace std;

#define PI 3.14

class Cylinder {
private:
  double radius;
  double height;

public:
  Cylinder() {
    radius = 1.0;
    height = 1.0;
  }
  Cylinder(double radius1, double height1) {
    radius = radius1;
    height = height1;
  }
  double volume() { return PI * radius * radius * height; }
  void details() {
    cout << "radius : " << radius << endl;
    cout << "height : " << height << endl;
    cout << "volume:" << this->volume() << endl;
  }
  double get_radius() { return radius; }
  double get_height() { return height; }
  void set_radius(double a) { radius = a; }
  void set_height(double a) { height = a; }
};

#define PI 3.14
int main() {

  Cylinder c2(2.3, 5.6);
  c2.details();
  Cylinder c3;
  c3.details();
  c3.set_radius(25.6);
  c3.details();
  c3.set_height(20.1);
  c3.details();
}