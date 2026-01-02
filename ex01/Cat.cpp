#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat: Default constructor called." << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other){
    std::cout << "Cat: Copy constructor called." << std::endl;
    this->brain = new Brain(*(other.brain));
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat: Assignement operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat: Destructor called." << std::endl;
    delete this->brain;
}

void Cat::makeSound() const{
    std::cout << "Meows!" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}