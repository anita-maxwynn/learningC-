#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  Person(string name, int age, string addr)
      : name(name), age(age), addr(addr) {}

  void show() const {
    cout << "Name: " << name << ", Age: " << age << ", Address: " << addr
         << endl;
  }

protected:
  int age;

private:
  string addr;

public:
  string name;
};

class Engineer : public Person {
public:
  Engineer(string name, int age, string addr, int contracts)
      : Person(name, age, addr), contracts(contracts) {}

  void show_eng() const {
    cout << "Engineer Name: " << name << endl;
    cout << "Engineer Age: " << age << endl;
    cout << "Contracts: " << contracts << endl;
  }

private:
  int contracts;
};

class CivilEngineer : public Engineer {
public:
  CivilEngineer(string name, int age, string addr, int contracts, string spec)
      : Engineer(name, age, addr, contracts), spec(spec) {}

  void show_civil() const {
    cout << "Civil Engineer Name: " << name << endl;
    cout << "Civil Engineer Age: " << age << endl;
    cout << "Speciality: " << spec << endl;
  }

private:
  string spec;
};

int main() {
  CivilEngineer ce("Alice", 30, "Street 1", 5, "Roads");

  ce.show();
  ce.show_eng();
  ce.show_civil();

  return 0;
}
