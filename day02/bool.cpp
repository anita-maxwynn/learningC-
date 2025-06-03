#include <iostream>
using namespace std;
int main() {
  bool x{true};
  bool y{false};
  /*   cout << boolalpha; <- this thing helps in converting it to true and false
     or else it will print 1 or 0 */
  cout << sizeof(x) << " " << x << ":" << sizeof(y) << " " << y << endl;
}