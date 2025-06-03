#include <iostream>

using namespace std;

class Person {
private:
  string name;
  int age;

public:
  Person(const string &name, int age) : name(name), age(age) {
    cout << "Person constructor" << endl;
  }
  int getAge() { return age; }
  string getName() { return name; }
};

class Student : private Person {
private:
  string school;

public:
  using Person::getAge;
  using Person::getName;
  Student(const string &name, int age, const string &school)
      : Person(name, age), school(school) {
    cout << "Student constructor" << endl;
  }
  string getSchool() { return school; }
};

int main() {
  Person p("kisuke", 20);
  cout << p.getName() << " " << p.getAge() << endl;
  Student s("kisuke", 20, "osaka");
  cout << s.getName() << " " << s.getAge() << " " << s.getSchool() << endl;
}