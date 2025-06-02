#include <iostream>

using namespace std;

class person {
protected:
  string name1;
  string name2;

public:
  void get_name() { cout << name1 << " " << name2 << endl; }
};

class pilot : public person {
public:
  int age;

  void set_age(int a) { age = a; }

  void set_name(string first, string last) {
    name1 = first;
    name2 = last;
  }

  void valid_or() {
    if (age > 20) {
      cout << "valid" << endl;
    } else {
      cout << "not valid" << endl;
    }
  }
};

int main() {
  pilot p1;
  p1.set_name("hello", "hi");
  p1.set_age(26);
  p1.valid_or();
  p1.get_name();
  return 0;
}