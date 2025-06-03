#include <iostream>
#include <string_view>
using namespace std;

class shape {
protected:
  string_view desc;
  int length;

public:
  shape(int len, string_view de) : length(len), desc(de) {}

  virtual void draw() const {
    cout << "It's the shape class: " << desc << endl;
  }
};

class oval : public shape {
public:
  oval(int len, string_view de) : shape(len, de) {}

  void draw() const override { cout << "Now it's oval: " << desc << endl; }
};

int main() {
  shape s(5, "Generic Shape");
  s.draw();

  oval o(10, "Ellipse");
  o.draw();

  shape &shape_ref = s;
  shape_ref.draw();

  shape &shape_ref2 = o;
  shape_ref2.draw();

  shape *shapes[3];

  // Assign base class and derived class objects
  shapes[0] = new shape(20, "hello");
  shapes[1] = new oval(26, "mckdnv");
  shapes[2] = new oval(6, "hell nw");

  // Call draw() on each object in the array
  for (int i = 0; i < 3; i++) {
    shapes[i]->draw(); // Calls appropriate version due to virtual function
  }

  // Clean up memory
  for (int i = 0; i < 3; i++) {
    delete shapes[i];
  }

  return 0;
}
