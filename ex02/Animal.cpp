#include "Animal.hpp"

Animal::Animal() : type("animal") {
  std::cout << "Animal Default Constructor" << std::endl;
}
Animal::~Animal() { std::cout << "Animal Destructor" << std::endl; }
Animal::Animal(const Animal &src) : type(src.type) {
  std::cout << "Animal Copy Constructor" << std::endl;
}
Animal &Animal::operator=(const Animal &src) {
  std::cout << "Animal Assignment Operator" << std::endl;
  if (this != &src)
    type = src.type;
  return *this;
}
