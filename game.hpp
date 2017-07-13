#ifndef GAME_HPP
#define GAME_HPP

class Game {
  private:
    int player1score;
    int player2score;
    int totalRounds;
  public:
    void playGame();
    void displayResults();
};

#endif