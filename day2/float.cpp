#include <iomanip> // For std::setprecision
#include <iostream>

int main() {
  float x = 1.0f / 3.0f;       // Limited precision
  double y = 1.0 / 3.0;        // Higher precision
  long double z = 1.0L / 3.0L; // Highest precision (if supported)

  // Print sizes of each floating-point type
  std::cout << "Sizes (in bytes):\n";
  std::cout << "float: " << sizeof(x) << "\n";
  std::cout << "double: " << sizeof(y) << "\n";
  std::cout << "long double: " << sizeof(z) << "\n\n";

  // Set precision to 20 digits and print values
  std::cout << std::setprecision(20);
  std::cout << "Values (1/3):\n";
  std::cout << "float: " << x << "\n";
  std::cout << "double: " << y << "\n";
  std::cout << "long double: " << z << "\n";
  float pos_inf = 1.0f / 0.0f; // Positive infinity
  float nan_val = 0.0f / 0.0f; // NaN (Not a Number)

  std::cout << std::setprecision(10);
  std::cout << "Infinity: " << pos_inf << "\n";
  std::cout << "NaN: " << nan_val << "\n";
}