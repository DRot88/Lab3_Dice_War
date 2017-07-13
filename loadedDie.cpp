#include "loadedDie.hpp"
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;

  LoadedDie::LoadedDie(int n) : Die(n) {};

  int LoadedDie::roll() {
    cout << "Loaded Roll: ";
    int result = (time(0) % sides) + 1;
    cout << "Roll: " << result << endl;
    if (result < sides/2) {
      result = sides - result + 1;
    }
    cout << "ReRoll: " << result << endl;
    return result;
}