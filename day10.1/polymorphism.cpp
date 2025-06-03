#include <iostream>
#include <string_view>
using namespace std;

class shape {
protected:
  string_view desc;
  int length;

public:
  shape(int len, string_view de) : length(len), desc(de) {}

  void draw() { cout << "It's the shape class: " << desc << endl; }
};

class oval : public shape {
public:
  oval(int len, string_view de) : shape(len, de) {}

  void draw() { cout << "Now it's oval: " << desc << endl; }
};

int main() {
  shape s(5, "Generic Shape");
  s.draw();

  oval o(10, "Ellipse");
  o.draw();

  shape &shape_ref = s;
  s.draw();
  shape &shape_ref2 = o;
  shape_ref2.draw();

  return 0;
}
