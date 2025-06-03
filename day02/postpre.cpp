#include <iostream>
using namespace std;
int main() {
  int a{10};
  int b{12};
  cout << "a:-" << a << endl;
  cout << "a:-" << a++ << endl;
  cout << "a:-" << a << endl;
  cout << "b:-" << b << endl;
  cout << "b:-" << ++b << endl;
  cout << "b:-" << b << endl;
}