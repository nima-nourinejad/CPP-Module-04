#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Cat.hpp"
#include <iostream>

int main() {
	Animal **animals = new Animal*[4];
	animals[0] = new Cat();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Dog();
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete animals[i];
	delete[] animals;

	std::cout << std::endl;
	Cat *cat = new Cat();
	cat->setBrainIdea("I am a cat", 0);
	Cat copy(*cat);
	delete cat;
	std::cout << copy.getIdea(0) << std::endl;


	
  return 0;
}
