#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog Default Constructor" << std::endl;
  type = "Dog";
}
Dog::~Dog() { std::cout << "Dog Destructor" << std::endl; }
Dog::Dog(const Dog &src) : Animal(src) {
  std::cout << "Dog Copy Constructor" << std::endl;
}
Dog &Dog::operator=(const Dog &src) {
  std::cout << "Dog Assignment Operator" << std::endl;
  if (this != &src)
    Animal::operator=(src);
  return *this;
}
void Dog::makeSound() const { std::cout << "Dog Sound" << std::endl; }
