#include "Dog.hpp"

Dog::Dog(){
    std::cout <<"Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog make sound: Bow-wow" << std::endl;
}

const Brain *Dog::getBrain() const{return(this->brain);}
