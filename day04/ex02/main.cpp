#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void){
    // Animal animal;
    // animal.makeSound();

    Animal *i = new Cat();
    Animal *j = new Dog();
    // *i = *j;
    delete i;
    delete j;

    Cat cat;
    cat.makeSound();
    cat.setBrainIdea("test", 0);
    Cat tmp1 = cat;
    std::cout << "\n<<<Cat deep copy test>>>" << std::endl;
    if (&(tmp1.getBrainIdea(0)) != &(cat.getBrainIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "-------------------" << std::endl;
    Dog dog;
    dog.setBrainIdea("test", 0);
    dog.makeSound();
    Dog tmp2 = dog;
    std::cout << "\n<<<Dog deep copy test>>>" << std::endl;
    if (&(tmp2.getBrainIdea(0)) != &(dog.getBrainIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "-------------------" << std::endl;
}