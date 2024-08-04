#include "Cat.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat Default Constructor" << std::endl;
  type = "Cat";
  _brain = new Brain();
}
Cat::~Cat() {
  std::cout << "Cat Destructor" << std::endl;
  delete _brain;
}
Cat::Cat(const Cat &src) : Animal(src) {

  std::cout << "Cat Copy Constructor" << std::endl;
  _brain = new Brain(*src._brain);
}
Cat &Cat::operator=(const Cat &src) {
  std::cout << "Cat Assignment Operator" << std::endl;
  if (this != &src) {
    Animal::operator=(src);
    if (_brain)
      delete _brain;
    _brain = new Brain(*src._brain);
  }
  return *this;
}
void Cat::setBrainIdea(const std::string &idea, int index) {
  if (_brain)
    _brain->setIdea(idea, index);
}
std::string Cat::getIdea(int index) const {
  if (_brain)
    return _brain->getIdea(index);
  return "";
}
void Cat::makeSound() const { std::cout << "Cat Sound" << std::endl; }
