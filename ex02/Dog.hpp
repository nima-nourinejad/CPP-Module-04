#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  ~Dog();
  Dog(const Dog &src);
  Dog &operator=(const Dog &src);
  void makeSound() const override;
  void setBrainIdea(const std::string &idea, int index);
  std::string getIdea(int index) const;

private:
  Brain *_brain;
};

#endif
