#include <iostream>
using namespace std;
int main() {
  int may{43};
  int *pointer_x{&may};
  int **another_one(&pointer_x);
  cout << *another_one;
  cout << endl << &pointer_x << endl;

  // pointer to char

  char *ptr{nullptr};
  char char_var{'S'};
  ptr = &char_var;
  cout << *ptr << endl;

  const char *message{"Hell Nah!"};

  cout << message << endl;

  int *p{nullptr};
  p = new int;
  *p = 77;
  cout << *p << endl;
  cout << p << endl;
  delete p;
  p = nullptr;
  //   cout << *p << endl;
  //   cout << p << endl;
}