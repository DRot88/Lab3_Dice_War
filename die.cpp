#include "die.hpp"
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;

// default constructor
Die::Die() {
  sides = 0;
}

// constructor requiring input for number of sides
Die::Die(int n) {
  sides = n;
}

// Roll the Die, randomizing between 1 and N sides
int Die::roll() {
  cout << "Regular Roll: ";
  int result = (time(0) % sides) + 1;
  cout << result << endl;
  return result;
}