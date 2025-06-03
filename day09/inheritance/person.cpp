#include "person.h"

Person::Person(const std::string &name_param) : name(name_param) {}

void Person::set_name(const std::string &new_name) { name = new_name; }

std::string Person::get_name() const { return name; }
