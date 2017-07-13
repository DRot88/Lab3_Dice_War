#ifndef DIE_HPP
#define DIE_HPP

class Die {
  protected:
    int sides;

  public:
    Die();
    Die(int n);
    virtual int roll();
};



#endif