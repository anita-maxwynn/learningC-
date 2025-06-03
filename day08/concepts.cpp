#include <concepts>
#include <iostream>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
  requires MyIntegral<T>
T foo(T a, T b) {
  return a + b;
}

template <typename T>
concept TinyType = requires(T a) {
  sizeof(a) <= 4;          // useless : checks only the syntax of this line
  requires sizeof(a) <= 4; // it is what checks real work
};

template <typename T>
  requires TinyType<T>
T meow(T a, T b) {
  return a + b;
}

int main() {
  double x{6};
  double y{7};
  char z{8};
  char w{9};
  // std::cout << foo(x, y) << std::endl;
  std::cout << meow(z, w) << std::endl;
  std::cout << meow(x, y) << std::endl;
  return 0;
}