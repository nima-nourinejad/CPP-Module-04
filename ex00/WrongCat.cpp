#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "WrongCat Default Constructor" << std::endl;
  type = "WrongCat";
}
WrongCat::~WrongCat() { std::cout << "WrongCat Destructor" << std::endl; }
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
  std::cout << "WrongCat Copy Constructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &src) {
  std::cout << "WrongCat Assignment Operator" << std::endl;
  if (this != &src)
    WrongAnimal::operator=(src);
  return *this;
}
void WrongCat::makeSound() const { std::cout << "WrongCat Sound" << std::endl; }
