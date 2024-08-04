#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog Default Constructor" << std::endl;
  type = "Dog";
  _brain = new Brain();
}
Dog::~Dog() {
  std::cout << "Dog Destructor" << std::endl;
  delete _brain;
}
Dog::Dog(const Dog &src) : Animal(src) {
  std::cout << "Dog Copy Constructor" << std::endl;
  _brain = new Brain(*src._brain);
}
Dog &Dog::operator=(const Dog &src) {
  std::cout << "Dog Assignment Operator" << std::endl;
  if (this != &src) {
    Animal::operator=(src);
    if (_brain)
      delete _brain;
    _brain = new Brain(*src._brain);
  }
  return *this;
}
void Dog::setBrainIdea(const std::string &idea, int index) {
  if (_brain)
    _brain->setIdea(idea, index);
}
std::string Dog::getIdea(int index) const {
  if (_brain)
    return _brain->getIdea(index);
  return "";
}
void Dog::makeSound() const { std::cout << "Dog Sound" << std::endl; }
