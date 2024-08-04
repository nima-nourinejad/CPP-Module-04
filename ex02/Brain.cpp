#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor" << std::endl; }
Brain::~Brain() { std::cout << "Brain destructor" << std::endl; }
Brain::Brain(const Brain &src) : _ideas(src._ideas) {
  std::cout << "Brain copy constructor" << std::endl;
}
Brain &Brain::operator=(const Brain &src) {
  std::cout << "Brain assignation operator" << std::endl;
  if (this != &src) {
    for (int i = 0; i < 100; i++)
      this->_ideas[i] = src._ideas[i];
  }
  return *this;
}
void Brain::setIdea(const std::string &idea, int index) {
  if (index >= 0 && index < 100)
    this->_ideas[index] = idea;
}
std::string Brain::getIdea(int index) const {
  if (index >= 0 && index < 100)
    return this->_ideas[index];
  return "";
}
