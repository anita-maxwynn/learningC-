#include <iostream>
#include <string_view>

using namespace std;

class shape {
private:
  string_view desc;

public:
  static int num_count;

  shape(string_view str) : desc(str) { num_count++; }
  virtual ~shape() {}

  void count_show() const { cout << "shape_number: " << num_count << endl; }

  string_view get_desc() const { return desc; }
};
int shape::num_count = 0;

class oval : public shape {
private:
  double x_radius{};
  double y_radius{};

public:
  static int num_count;
  oval(string_view desc, double x, double y)
      : shape(desc), x_radius(x), y_radius(y) {
    num_count++;
  }

  void print_info() const {
    cout << "Oval description: " << get_desc() << ", x_radius: " << x_radius
         << ", y_radius: " << y_radius << endl;
  }
};

int oval::num_count = 0;

int main() {
  shape s1("Shape 1");
  cout << s1.get_desc() << endl;
  shape s2("Shape 2");
  cout << s2.get_desc() << endl;
  cout << shape::num_count << endl;
  oval o1("Oval 1", 3.5, 4.5);
  oval o2("Oval 2", 5.0, 2.5);

  o1.print_info();

  o2.print_info();
  cout << oval::num_count << endl;
  cout << shape::num_count << endl;

  return 0;
}
