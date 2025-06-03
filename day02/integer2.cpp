#include <iostream>
int main() {
  short signed int x{};       // -2**(n-1)~2**(n-1)-1
  long long unsigned int y{}; // 0~2**(n)-1
  std::cout << sizeof(x) << " " << sizeof(y);
}