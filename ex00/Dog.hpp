#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  ~Dog();
  Dog(const Dog &src);
  Dog &operator=(const Dog &src);
  void makeSound() const override;

private:
};

#endif
