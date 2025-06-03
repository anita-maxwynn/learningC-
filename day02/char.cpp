#include <iostream>
int main() {
  char x{'a'};
  char y{' '};
  std::cout << sizeof(x) << " " << sizeof(y) << std::endl;
  char c = 65;
  std::cout << c;
}