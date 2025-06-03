// #include <cstddef>
// #include <cstddef>
#include <iostream>
#include <string>
// #include <ostream>
using namespace std;
int main() {
  int arr[10];
  arr[0] = 20;
  arr[2] = 31;
  for (size_t i{}; i < 10; i++) {
    cout << i + 1 << " : ";
    cin >> arr[i];
  }
  auto sum{0};
  for (size_t i{}; i < 10; i++) {
    cout << i + 1 << " : " << arr[i] << endl;
    sum += arr[i];
  }
  cout << sum << endl;
  double ninja[5]{0.5, 1.2, 2.3, 2.5, 2.6};
  for (size_t k{}; k < size(ninja); ++k) {
    cout << ninja[k] << endl;
  }
  int score[]{10, 23, 25, 26, 27};
  for (auto d : score) {
    cout << d << endl;
  }

  char message[11] = {'o', ' ', 'H', 'E', 'L', 'L', ' ', 'N', 'A', 'H', '!'};
  for (auto d : message) {
    cout << d;
  }
  cout << endl;
  string message1[]{"hello", "meow"};
  for (size_t d{}; d < size(message1); d++) {
    cout << message1[d] << endl;
  }
  //   cout << sizeof(message1);
  cout << message << endl;
}