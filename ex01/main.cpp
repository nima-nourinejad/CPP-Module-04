#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Cat.hpp"
#include <iostream>

int main() {
  Cat cat_1;
  cat_1.setBrainIdea("Cat idea", 0);
  std::cout << cat_1.getIdea(0) << std::endl;
  std::cout << std::endl;

  Cat cat_2 = cat_1;
  std::cout << cat_2.getIdea(0) << std::endl;
  std::cout << std::endl;

  Dog dog_1;
  dog_1.setBrainIdea("Dog idea", 0);
  std::cout << dog_1.getIdea(0) << std::endl;
  std::cout << std::endl;

  Dog *dog_2 = new Dog(dog_1);
  std::cout << dog_2->getIdea(0) << std::endl;
  delete dog_2;
  std::cout << std::endl;
  std::cout << std::endl;

  const Animal *j = new Dog();
  delete j;
  std::cout << std::endl;
  std::cout << std::endl;
  
  const Animal *i = new Cat();
  delete i;
  std::cout << std::endl;
  std::cout << std::endl;
  return 0;
}
