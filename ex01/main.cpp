#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *animal = new Animal();
    std::cout << "Animal Type: " << animal->getType() << std::endl;
    animal->makeSound();
    delete animal;

    std::cout << std::endl;
	const Animal *dog_1 = new Dog();
    std::cout << "Dog 1 Type: " << dog_1->getType() << std::endl;
    dog_1->makeSound();
    delete dog_1;

	std::cout << std::endl;
    const Animal *cat_1 = new Cat();
    std::cout << "Cat 1 Type: " << cat_1->getType() << std::endl;
    cat_1->makeSound();
    delete cat_1;

    std::cout << std::endl;
	const Animal dog_2 = Dog();
    std::cout << "Dog 2 Type: " << dog_2.getType() << std::endl;
    dog_2.makeSound();

    std::cout << std::endl;
	const Animal cat_2 = Cat();
    std::cout << "Cat 2 Type: " << cat_2.getType() << std::endl;
    cat_2.makeSound();

	std::cout << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    std::cout << "WrongAnimal Type: " << wrongAnimal->getType() << std::endl;
    wrongAnimal->makeSound();
    delete wrongAnimal;

    std::cout << std::endl;
    const WrongAnimal *wrongCat_1 = new WrongCat();
    std::cout << "WrongCat 1 Type: " << wrongCat_1->getType() << std::endl;
    wrongCat_1->makeSound();
    delete wrongCat_1;

    std::cout << std::endl;
    const WrongAnimal wrongCat_2 = WrongCat();
    std::cout << "WrongCat 2 Type: " << wrongCat_2.getType() << std::endl;
    wrongCat_2.makeSound();

    std::cout << std::endl;
    const WrongCat wrongCat_3;
    std::cout << "WrongCat 3 Type: " << wrongCat_3.getType() << std::endl;
    wrongCat_3.makeSound();

    std::cout << std::endl;
    const WrongCat *wrongCat_4 = new WrongCat();
    std::cout << "WrongCat 4 Type: " << wrongCat_4->getType() << std::endl;
    wrongCat_4->makeSound();
    delete wrongCat_4;
	std::cout << std::endl;

    return 0;
}
