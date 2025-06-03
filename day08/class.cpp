#include <iostream>
using namespace std;

#define PI 3.14

class cylinder {
public:
  double radius;
  double height;

public:
  double volum() { return PI * radius * radius * height; }

private:
};

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
};

int main() {
  cylinder c1;
  c1.height = 3.2;
  c1.radius = 2.3;
  cout << c1.volum() << endl;

  Cylinder c2(2.3, 5.6);
  c2.details();
  Cylinder c3;
  c3.details();
}