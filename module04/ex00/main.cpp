#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << " -------------- Constructors Test ------------------" << std::endl;
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << " -------------- Poly Test ------------------\n" << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();
    wrongCat->makeSound();
    wrongAnimal->makeSound();

    std::cout << "\n -------------- Destructors Test ------------------" << std::endl;
    delete(meta);
    delete(dog);
    delete(cat);
    delete(wrongAnimal);
    delete(wrongCat);
    return 0;
}