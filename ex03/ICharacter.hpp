#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class ICharacter {
public:
  ICharacter();
  ~ICharacter();
  ICharacter(const ICharacter &src);
  ICharacter &operator=(const ICharacter &src);

private:
};


#endif
