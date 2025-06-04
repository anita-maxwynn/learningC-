#include <iostream>
using namespace std;

class Animal {
public:
  virtual void speak() { cout << "Animal speaks\n"; }
};

class Dog : public Animal {
public:
  void bark() { cout << "Dog barks\n"; }
};

int main() {
  Animal *a = new Dog(); // base pointer to derived object

  Dog *d = dynamic_cast<Dog *>(a); // safe downcast
  if (d) {
    d->bark(); // works, because 'a' actually points to a Dog
  } else {
    cout << "Cast failed\n";
  }

  delete a;
}
