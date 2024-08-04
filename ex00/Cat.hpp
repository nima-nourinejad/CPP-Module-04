#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  virtual ~Cat();
  Cat(const Cat &src);
  Cat &operator=(const Cat &src);
  virtual void makeSound() const;

private:
};

#endif
