#include <iostream>
#include <typeinfo>
int main() {
  auto var1{10};
  auto var2{"hello"};
  auto var3{10.333f};
  std::cout << var1 << typeid(var1).name() << std::endl
            << var2 << typeid(var2).name() << std::endl
            << var3 << typeid(var3).name() << std::endl;
}