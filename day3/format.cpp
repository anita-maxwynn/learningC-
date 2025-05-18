#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;
int main() {
  cout << left;
  cout << setfill('-');
  cout << setw(10) << "hello" << "|" << endl;
  cout << setw(10) << "o hell nah" << flush << endl;
  //   cout << ;
  cout << showpos;
  cout << setw(10) << 15;
}