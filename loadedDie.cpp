#include "loadedDie.hpp"
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;

// LoadedDie::LoadedDie(int n) : Die(n) {
//   sides = n;
// }

  int LoadedDie::roll() {
    cout << "Loaded Roll: ";
    int result = (time(0) % sides) + 1;
    cout << result << endl;
    return result;
}