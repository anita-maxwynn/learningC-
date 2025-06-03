#include <iostream>
using namespace std;
int main() {
  // 1st one (dangling pointer):-
  int *ptr{};
  cout << ptr << endl;
  delete ptr;
  ptr = nullptr;
  // 2nd one:-
  int *ptr2{new int{10}};
  cout << ptr2 << " : " << *ptr2 << endl;
  delete ptr2;
  cout << ptr2 << " : " << *ptr2 << endl;

  //   3rd one:-
  int k{5};
  int *ptr3{&k};
  int *ptr4{ptr3};
  cout << "ptr3:" << ptr3 << "\n ptr3 " << *ptr3 << endl;
  delete ptr3;
  cout << "ptr4:" << ptr3 << "\n ptr4 " << *ptr4 << endl;
  cout << &k;
}