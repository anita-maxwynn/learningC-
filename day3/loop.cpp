#include <iostream>
using namespace std;
int main() {
  size_t j{0};

  for (j; j < 10; ++j) {
    cout << j << endl;
  }
  cout << sizeof(size_t) << endl;

  cout << "Loop done, the value of j is: " << j << endl;

  unsigned int a{0};
  auto count{10};
  while (a < count) {
    cout << a << endl;
    ++a;
  }
  cout << typeid(count).name() << endl;

  size_t k{};
  int count2{10};

  do {
    cout << "lorem" << endl;
    k += 1;
  } while (k < count2);
  cout << typeid(k).name() << " " << typeid(count2).name() << endl;
  return 0;
}
