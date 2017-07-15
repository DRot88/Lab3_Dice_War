#include <iostream>
#include "die.hpp"
#include "loadedDie.hpp"
#include "game.hpp"
#include "menu.hpp"
#include "player.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
  Menu diceMenu;
  diceMenu.displayMenu();
  if (diceMenu.getChoice() == 2) {
    return 0;
  } else {
    Game diceWar;
    diceWar.playGame();
  }

  // Die p1Die(4);
  // p1Die.roll();

  return 0;
}