#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Cat.hpp"
#include <iostream>

int main() {
  Animal *j = new Dog();
  delete j;
  std::cout << std::endl;
  std::cout << std::endl;
  
  Animal *i = new Cat();
  delete i;
  std::cout << std::endl;
  std::cout << std::endl;

//   Animal animal; not instantiable
  return 0;
}
