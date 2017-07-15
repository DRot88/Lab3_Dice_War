#include "menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Menu::displayMenu() {
  int input;
  cout << "\nWelcome to Dice War!" << endl << endl;
  cout << "1: Play Dice Game" << endl;
  cout << "2: Quit" << endl << endl;
  cout << "Please enter your choice from one of the options above: " ;  
  do {
    cin >> input;
    if ((input != 1) && (input != 2)) {
      cout << "The value you entered is not valid. Please try again: ";
    }
  } while ((input !=1) && (input != 2));

  setChoice(input);
}

void Menu::setChoice(int c) {
  choice = c;
}

int Menu::getChoice() {
  return choice;
}