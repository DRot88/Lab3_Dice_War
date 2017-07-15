#ifndef MENU_HPP
#define MENU_HPP

class Menu {
  private:
    int choice;
  public:
    void displayMenu();
    void setChoice(int c);
    int getChoice();
};

#endif