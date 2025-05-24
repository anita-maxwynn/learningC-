#include <iostream>

using namespace std;
int honey(int &a);
int main() {
  int a{23};
  cout << "before " << a << endl;
  honey(a);
  cout << "before " << a << endl; // no change of value
}

int honey(int &a) { return ++(a); }