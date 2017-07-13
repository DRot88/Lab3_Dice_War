#include "die.hpp"
#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

class LoadedDie : public Die {
  private:

  public:
    LoadedDie(int n) : Die(n) {
      sides = n;
    }

    virtual int roll();
};


#endif