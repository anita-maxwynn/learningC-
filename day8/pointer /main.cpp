#include <iostream>
using namespace std;
#include "constant.h"
#include "cylinder.h"

int main() {
  Cylinder c2(2.3, 5.6);
  c2.details();

  Cylinder *c3 = new Cylinder(25.3, 24.6);
  (*c3).details();
  cout << (*c3).volume() << endl;
  c3->details();
  delete c3;
  return 0;
}
