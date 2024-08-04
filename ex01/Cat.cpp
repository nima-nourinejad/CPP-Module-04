#include "Cat.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat Default Constructor" << std::endl;
  type = "Cat";
}
Cat::~Cat() { std::cout << "Cat Destructor" << std::endl; }
Cat::Cat(const Cat &src) : Animal(src) {

  std::cout << "Cat Copy Constructor" << std::endl;
}
Cat &Cat::operator=(const Cat &src) {
  std::cout << "Cat Assignment Operator" << std::endl;
  if (this != &src)
    Animal::operator=(src);
  return *this;
}
void Cat::makeSound() const { std::cout << "Cat Sound" << std::endl; }
