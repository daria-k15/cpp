#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

const std::string &Animal::getType() const{return(this->type);}

void Animal::makeSound() const{
    std::cout << "Animal make sound ..." << std::endl;
}