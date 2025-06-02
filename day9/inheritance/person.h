#ifndef PERSON_H
#define PERSON_H

#include <string>

class Player; // Forward declaration

class Person {
  friend class Player; // Player can access private members of Person

public:
  Person() = default;
  Person(const std::string &name_param);

  void set_name(const std::string &new_name);
  std::string get_name() const;

private:
  std::string name;
};

#endif
