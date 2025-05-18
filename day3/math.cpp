#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double weight{-7.7};
  cout << floor(weight) << endl; // nearest biggest integer smaller than it
  cout << ceil(weight) << endl;  // nearest smallest integer bigger than it
  cout << abs(weight) << endl;
  cout << pow(2.3, 2) << endl;
  cout << exp(2.3);
  cout << endl << log(9) / log(3);
}