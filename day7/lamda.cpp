#include <iostream>
#include <string>
using namespace std;
int main() {
  int a{5};
  auto x = [=](int b) {
    auto k = "oh yeah:- " + to_string(a + b);
    return k;
  };
  cout << "Without name" << [a]() -> int { return a; }() << endl;
  cout << x(a) << endl;
  []() { cout << "you honey" << endl; }();
  [&]() {
    a++;
    cout << "after change" << a << endl;
  }();
  cout << "a : " << a << endl;
}