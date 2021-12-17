#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("no type"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other){
        this->type = other.getType();
    }
    return(*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

const std::string &WrongAnimal::getType() const {return (this->type);}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal make sound: ..." << std::endl;
}