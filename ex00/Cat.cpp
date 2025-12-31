#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat: Assignement operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat: Destructor called." << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meows!" << std::endl;
}