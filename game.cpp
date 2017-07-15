#include "game.hpp"
#include "menu.hpp"
#include "die.hpp"
#include "loadedDie.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Game::Game() {
  totalRounds = 0;
}

void Game::playGame() {
  int dieType; // for input to choose type of die
  int sides; // for input to choose sides of die

  cout << "Starting dice game now!" << endl << endl;
  cout << "Please enter the total rounds to be played: ";
  cin >> totalRounds;

  cout << "Will Player 1 have a regular or loaded die? (Enter 1 for Regular, enter 2 for Loaded): ";
  cin >> dieType;

  if (dieType == 2) {
    p1.setLoaded();
  }

  // set sides and create die
  cout << "How many sides will Player 1 have on their Die?: ";
  cin >> sides;

  if (dieType == 1) {
    Die p1Die(sides);
    p1DiePtr = &p1Die;
  } else {
    LoadedDie p1Die(sides);
    p1DiePtr = &p1Die;
    cout << "created a Loaded die with " << sides << " sides\n";
  }

  // ask player 2 for dice type
  cout << "Will Player 2 have a regular or loaded die? (Enter 1 for Regular, enter 2 for Loaded): ";
  cin >> dieType;

  if (dieType == 2) {
    p2.setLoaded();
  }  

  // set sides and create die
  cout << "How many sides will Player 2 have on their Die?: " << endl;
  cin >> sides;
  if (dieType == 1) {
    Die p2Die(sides);
    p2DiePtr = &p2Die;
  } else {
    LoadedDie p2Die(sides);
    p2DiePtr = &p2Die;
  }

  for (int roundNum = 1; roundNum <= totalRounds; roundNum++) {
    int p1roll = 0;
    int p2roll = 0;
    cout << "Round # " << roundNum << endl;
    p1roll = p1DiePtr->roll();
    p2roll = p2DiePtr->roll();
    cout << "Player 1 Rolled a: " << p1roll << endl;
    cout << "Player 2 Rolled a: " << p2roll << endl;
    if (p1roll > p2roll) {
      cout << "Player 1 wins round # " << roundNum << endl << endl;
    } else {
      cout << "Player 2 wins round # " << roundNum << endl << endl;      
    }
  }

  return;
}

void Game::displayResults() {
  cout << "After " << totalRounds << " rounds, the scores are as follows:" << endl;
  cout << "Player 1 score: " << p1.getScore() << endl;
  cout << "Player 2 score: " << p2.getScore() << endl;
}

