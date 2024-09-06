#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "Animal made by new Animal" << std::endl;
    Animal *animal = new Animal();
    std::cout << "Animal Type: " << animal->getType() << std::endl;
	std::cout << "Animal says: ";
    animal->makeSound();
    delete animal;

    std::cout << std::endl;
	std::cout << "Animal made by new Dog" << std::endl;
	Animal *dog_1 = new Dog();
    std::cout << "Animal Type: " << dog_1->getType() << std::endl;
	std::cout << "Animal says: ";
    dog_1->makeSound();
    delete dog_1;

	std::cout << std::endl;
	std::cout << "Animal made by new Cat" << std::endl;
    Animal *cat_1 = new Cat();
    std::cout << "Animal Type: " << cat_1->getType() << std::endl;
	std::cout << "Animal says: ";
    cat_1->makeSound();
    delete cat_1;

    std::cout << std::endl;
	std::cout << "Animal made by Dog" << std::endl;
	Animal dog_2 = Dog();
    std::cout << "Animal Type: " << dog_2.getType() << std::endl;
	std::cout << "Animal says: ";
    dog_2.makeSound();

    std::cout << std::endl;
	std::cout << "Animal made by Cat" << std::endl;
	Animal cat_2 = Cat();
    std::cout << "Animal Type: " << cat_2.getType() << std::endl;
	std::cout << "Animal says: ";
    cat_2.makeSound();

	std::cout << std::endl;
	std::cout << "WrongAnimal made by new WrongAnimal" << std::endl;
    WrongAnimal *wrongAnimal = new WrongAnimal();
    std::cout << "WrongAnimal Type: " << wrongAnimal->getType() << std::endl;
	std::cout << "WrongAnimal says: ";
    wrongAnimal->makeSound();
    delete wrongAnimal;

    std::cout << std::endl;
	std::cout << "WrongAnimal made by new WrongCat" << std::endl;
    WrongAnimal *wrongCat_1 = new WrongCat();
    std::cout << "WrongAnimal Type: " << wrongCat_1->getType() << std::endl;
	std::cout << "WrongAnimal says: ";
    wrongCat_1->makeSound();
    delete wrongCat_1;

    std::cout << std::endl;
	std::cout << "WrongAnimal made by WrongCat" << std::endl;
    WrongAnimal wrongCat_2 = WrongCat();
    std::cout << "WrongAnimal Type: " << wrongCat_2.getType() << std::endl;
	std::cout << "WrongAnimal says: ";
    wrongCat_2.makeSound();

    std::cout << std::endl;
	std::cout << "WrongCat made by WrongCat" << std::endl;
    WrongCat wrongCat_3;
    std::cout << "WrongCat Type: " << wrongCat_3.getType() << std::endl;
	std::cout << "WrongCat says: ";
    wrongCat_3.makeSound();

    std::cout << std::endl;
	std::cout << "WrongCat made by new WrongCat" << std::endl;
    WrongCat *wrongCat_4 = new WrongCat();
    std::cout << "WrongCat Type: " << wrongCat_4->getType() << std::endl;
	std::cout << "WrongCat says: ";
    wrongCat_4->makeSound();
    delete wrongCat_4;
	std::cout << std::endl;

    return 0;
}
