#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main(void)
// {
//     // Animal a;
//     // Animal b(a);
//     // Animal c;
//     // c = a;
//     // a.makeSound();

//     // Dog dog1;
//     // dog1.makeSound();
//     // Dog dog2(dog1);

//     // Cat cat1;
//     // Cat cat2;
//     // cat1 = cat2;
//     // cat1.makeSound();

//     const Animal* a = new Dog();
//     const Animal* b = new Cat();
//     a->makeSound(); // Bark
//     b->makeSound(); // Meow
//     delete a;
//     delete b;

//     return (0);
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    return 0;
}