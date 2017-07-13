#include "die.hpp"
#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

class LoadedDie : public Die {
  private:

  public:
    // Loaded Die constructor
    LoadedDie(int n);

    // Derived class roll function
    virtual int roll();
};


#endif