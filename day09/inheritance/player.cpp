#include "player.h"

Player::Player(const std::string &game_param) : game(game_param) {}

void Player::set_game(const std::string &new_game) { game = new_game; }

std::string Player::get_game() const { return game; }

std::ostream &operator<<(std::ostream &out, const Player &player) {
  // Accessing private 'name' from Person and 'game' from Player
  out << "Player Name: " << player.name << ", Game: " << player.game;
  return out;
}
