#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  Person(string name, int age, string addr)
      : name(name), age(age), addr(addr) {}
  //   Person(const Person &p) : name(p.name), age(p.age), addr(p.addr) {}  ->
  //   the copy one
  void show() const {
    cout << "Name: " << name << ", Age: " << age << ", Address: " << addr
         << endl;
  }

  int get_age() const { return age; }
  string get_name() const { return name; }
  string get_address() const { return addr; }

protected:
  int age;

private:
  string addr;

public:
  string name;
};

int main() {
  Person p("kisuke", 20, "osaka");
  Person p2(p);
  p2.show();
  return 0;
}
