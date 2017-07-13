#include <iostream>
#include "die.hpp"
#include "loadedDie.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {

  Die d1(6);
  LoadedDie ld1(21);

  d1.roll();
  ld1.roll();


  return 0;
}