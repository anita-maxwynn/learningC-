#include <iostream>
using namespace std;
#include "constant.h"
#include "cylinder.h"

int main() {
  Cylinder c2(2.3, 5.6);
  c2.details();

  Cylinder c3;
  c3.details();

  c3.set_radius(25.6);
  c3.details();

  c3.set_height(20.1);
  c3.details();

  return 0;
}
