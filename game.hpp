#ifndef GAME_HPP
#define GAME_HPP
#include "player.hpp"
#include "die.hpp"
#include "loadedDie.hpp"

class Game {
  private:
    int totalRounds;
    Player p1;
    Player p2;
    Die *p1DiePtr;
    Die *p2DiePtr;
  public:
    Game();
    void playGame();
    void displayResults();
};

#endif