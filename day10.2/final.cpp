#include <iostream>
using namespace std;

class Animal {
protected:
  string_view sound;

public:
  Animal(string_view sound) { this->sound = sound; }
  virtual void makeSound() { cout << sound << endl; }
  void specialSound() { cout << "It's the base class" << endl; }
};

class Dog final : public Animal {
public:
  Dog(string_view sound) : Animal(sound) {}
  void soundmaker() { cout << sound << endl; }

  void makeSound() { cout << "It's a dog" << endl; }
};

class bird : public Animal {
public:
  bird(string_view sound) : Animal(sound) {}

  void makeSound() { cout << "It's a bird" << endl; }
  virtual void wings() final { cout << "It's a bird with wings" << endl; }
};

class pegion : public bird {
public:
  pegion(string_view sound) : bird(sound) {}

  void makeSound() { cout << "It's a pegion" << endl; }
};

int main() {
  Animal a("Animal");
  a.makeSound();
  Dog d("Dog");
  d.makeSound();
  d.specialSound();
  bird b("Bird");
  b.makeSound();
  b.wings();
  pegion p("Pegion");
  p.makeSound();
  p.wings();
}