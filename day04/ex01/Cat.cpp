#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    try{
        brain = new Brain();
    } catch (const std::exception &e){
        std::cout << e.what() << "\n";
        throw ;
    }
}

Cat::Cat(const Cat &other){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat make sound: Meow meow" << std::endl;
}

const Brain *Cat::getBrain() const{return(this->brain);}