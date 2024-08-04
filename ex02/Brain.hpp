#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:
  Brain();
  ~Brain();
  Brain(const Brain &src);
  Brain &operator=(const Brain &src);
  void setIdea(const std::string &idea, int index);
  std::string getIdea(int index) const;

private:
  std::string _ideas[100];
};

#endif
