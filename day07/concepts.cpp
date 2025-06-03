#include <concepts>
#include <iostream>
#include <string>
using namespace std;

// ---------- Declarations ----------
template <typename T>
  requires std::is_arithmetic_v<T>
T maxenter(T a, T b);

string maxenter(string a, string b); // Overload for strings

template <typename T> T sum(T &a, T &b);

template <> string sum<string>(string &a, string &b);

// ---------- Main Function ----------
int main() {
  string a{"ayo bro"};
  string b{"byo bro"};
  int x{10};
  int y{20};
  double p{20.3};
  double q{23.5};

  auto ans1 = maxenter(a, b);
  //   auto ans2 = maxenter(x, y);
  //   auto ans3 = maxenter(p, q);

  cout << "1 : " << ans1 << endl;
  //   cout << "2 : " << ans2 << endl;
  //   cout << "3 : " << ans3 << endl;

  auto sum1 = sum(a, b);
  auto sum2 = sum(x, y);
  auto sum3 = sum(p, q);

  cout << "Sum 1 (string): " << sum1 << endl;
  cout << "Sum 2 (int): " << sum2 << endl;
  cout << "Sum 3 (double): " << sum3 << endl;

  return 0;
}

// ---------- Definitions ----------
template <typename T>
  requires std::is_arithmetic_v<T>
T maxenter(T a, T b) {
  return (a > b) ? a : b;
}

string maxenter(string a, string b) { return (a > b) ? a : b; }

template <typename T> T sum(T &a, T &b) { return (a + b) * 10; }

template <> string sum<string>(string &a, string &b) {
  string result = a + b;
  string repeated;
  for (int i = 0; i < 10; ++i) {
    repeated += result;
  }
  return repeated;
}
