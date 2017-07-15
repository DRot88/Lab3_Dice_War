#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "die.hpp"
#include "loadedDie.hpp"

class Player {
  private:
    int score;
    bool loaded;

  public:
    Player();
    void increaseScore();
    int getScore();
    void setLoaded();
    bool getLoaded();
};




#endif