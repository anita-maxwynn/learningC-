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

class Engineer : private Person {
  friend class CivilEngineer;

public:
  Engineer(string name, int age, string addr, int contracts)
      : Person(name, age, addr), contracts(contracts) {}

  void show_eng() const {
    cout << "Engineer Name: " << get_name() << endl;
    cout << "Engineer Age: " << get_age() << endl;
    cout << "Contracts: " << contracts << endl;
  }

  using Person::get_address;
  using Person::get_age;
  using Person::get_name;

  int get_contract() const { return contracts; }

private:
  int contracts;
};

class CivilEngineer : public Engineer {
public:
  CivilEngineer(string name, int age, string addr, int contracts, string spec)
      : Engineer(name, age, addr, contracts), spec(spec) {}

  void show_civil() const {
    cout << "Civil Engineer Name: " << get_name() << endl;
    cout << "Civil Engineer Age: " << get_age() << endl;
    cout << "Address: " << get_address() << endl;
    cout << "Contracts: " << get_contract() << endl;
    cout << "Speciality: " << spec << endl;
  }

private:
  string spec;
};

int main() {
  CivilEngineer ce("Alice", 30, "Street 1", 5, "Roads");

  ce.show_civil();
  ce.show_eng();

  return 0;
}
