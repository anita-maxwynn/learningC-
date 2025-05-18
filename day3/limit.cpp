#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << "double min:    " << numeric_limits<double>::min() << endl;
  cout << "double lowest: " << numeric_limits<double>::lowest() << endl;
}
