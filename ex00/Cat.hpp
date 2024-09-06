#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  ~Cat();
  Cat(const Cat &src);
  Cat &operator=(const Cat &src);
  void makeSound() const override;

private:
};

#endif
