#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < SIZE; i++)
        animals[i]->makeSound();

    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want to play!");
    Dog dog2(dog1);
    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea before: " << dog2.getBrain()->getIdea(0) << std::endl;
    dog2.getBrain()->setIdea(0, "I am different!");
    std::cout << "Dog2 idea after: " << dog2.getBrain()->getIdea(0) << std::endl;


    for (int i = 0; i < SIZE; i++)
        delete animals[i];

    return 0;
}