#include <iostream>
#include <string_view>
using namespace std;

class IAnimal {
public:
  virtual void makeSound() const = 0;
  virtual void breathe() const = 0;
  virtual ~IAnimal() {}
};

class Animal : public IAnimal {
protected:
  string_view m_description;

public:
  Animal(string_view desc) : m_description(desc) {}
  virtual void breathe() const override {
    cout << m_description << " is breathing..." << endl;
  }
};

class Dog : public Animal {
public:
  Dog(string_view desc) : Animal(desc) {}
  void makeSound() const override {
    cout << m_description << " says: Woof!" << endl;
  }
};

class Cat : public Animal {
public:
  Cat(string_view desc) : Animal(desc) {}
  void makeSound() const override {
    cout << m_description << " says: Meow!" << endl;
  }
};

class Bird : public Animal {
public:
  Bird(string_view desc) : Animal(desc) {}
  void makeSound() const override {
    cout << m_description << " says: Tweet!" << endl;
  }
};

void describeAnimal(const IAnimal &animal) {
  animal.breathe();
  animal.makeSound();
}

int main() {
  Dog dog("Bulldog");
  Cat cat("Persian");
  Bird bird("Parrot");

  describeAnimal(dog);
  describeAnimal(cat);
  describeAnimal(bird);

  return 0;
}
