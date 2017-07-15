#include "loadedDie.hpp"
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;

  LoadedDie::LoadedDie(int n) : Die(n) {};

  int LoadedDie::roll() {
    int result = rand() % sides + 1;
    if (result < sides/2) {
      result = sides - 1;
    }
    cout << "Loaded Roll: " << result << endl;
    return result;
}