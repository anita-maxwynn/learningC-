#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
public:
  Person(const std::string &names_param, int age_param);
  void print_info() const {
    std::cout << "name : " << full_name << " , age : " << age << std::endl;
  }
  void print_number() const { std::cout << person_count << std::endl; }

private:
  std::string full_name;
  int age;

public:
  static int person_count;
};

#endif