#include <iostream>
using namespace std;
int main() {
  size_t size{10};
  double *p_sal{new double[size]};
  int *p_stud{new (nothrow) int[size]{1, 2, 3, 4, 5, 6, 7, 8, 9}};
  cout << "\nStudent IDs (initialized to 0):" << endl;
  for (size_t i = 0; i < size; ++i) {
    cout << "p_stud[" << i << "] = " << p_stud[i] << endl;
  }
  delete[] p_stud;
  p_stud = nullptr;
  delete[] p_sal;
  p_sal = nullptr;
}