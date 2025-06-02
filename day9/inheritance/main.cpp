#include "player.h"
#include <iostream>

int main() {
  Player p1("Football");
  p1.set_name("Sourish");

  std::cout << p1 << std::endl;

  return 0;
}
