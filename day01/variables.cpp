#include <iostream>

using namespace std;

int main() {
  int a = 15;         // decimal
  int b = 017;        // octal
  int c = 0x123B2;    // hexadecimal
  int d = 0b00011111; // binary
  int yo1{};          // initializes to 0
  int yo2(3);         // braced initialization
  int yo3{yo2};       // functional initialization
  cout << a << endl
       << b << endl
       << c << endl
       << d << endl
       << yo1 << endl
       << yo2 << endl
       << yo3;
}