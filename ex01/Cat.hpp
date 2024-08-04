#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  virtual ~Cat();
  Cat(const Cat &src);
  Cat &operator=(const Cat &src);
  virtual void makeSound() const;
  void setBrainIdea(const std::string &idea, int index);
  std::string getIdea(int index) const;

private:
  Brain *_brain;
};

#endif
