#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string>

class Player : public Person {
  // Only this function gets access to private data of Player (and Person since
  // it's friend)
  friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
  Player() = default;
  Player(const std::string &game_param);

  void set_game(const std::string &new_game);
  std::string get_game() const;

private:
  std::string game;
};

#endif
