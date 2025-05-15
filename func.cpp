#include <iostream>
#include <string>
using namespace std;

int sum1(int a, int b) { return a + b; }
int main() {
  cout << "ayo" << endl;
  int a, b;
  cin >> a >> b;
  cout << sum1(a, b) << endl;
  //   cerr << "you are dead";
  //   clog << "hell nah";
  cin.ignore(); // 👈 This clears the leftover '\n'
  string name;
  getline(cin, name);
  cout << name;
}