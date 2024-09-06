#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  ~Cat();
  Cat(const Cat &src);
  Cat &operator=(const Cat &src);
  void makeSound() const override;
  void setBrainIdea(const std::string &idea, int index);
  std::string getIdea(int index) const;

private:
  Brain *_brain;
};

#endif
