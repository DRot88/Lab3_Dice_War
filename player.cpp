#include "player.hpp"
#include <iostream>

Player::Player() {
  score = 0;
  loaded = false;
}

void Player::increaseScore() {
  score += 1;
}

int Player::getScore() {
  return score;
}

void Player::setLoaded() {
  loaded = true;
}

bool Player::getLoaded() {
  return loaded;
}