#include <iostream>
using namespace std;

int main() {
  int int_val{10};
  int &reference_to_var{int_val};

  cout << int_val << endl;
  cout << reference_to_var << endl;
  cout << &reference_to_var << endl;
  reference_to_var = 20;
  cout << int_val << endl;
  cout << reference_to_var << endl;
  cout << &reference_to_var << endl;
  cout << &int_val;
}