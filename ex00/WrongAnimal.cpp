#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal Default Constructor" << std::endl;
}
WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {
  std::cout << "WrongAnimal Copy Constructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
  std::cout << "WrongAnimal Assignment Operator" << std::endl;
  if (this != &src)
    type = src.type;
  return *this;
}
void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal Sound" << std::endl;
}
std::string WrongAnimal::getType() const { return type; }
