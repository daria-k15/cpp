#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

// WrongCat::WrongCat(const WrongCat &other){
//     std::cout << "WrongCat copy constructor called" << std::endl;
//     *this = other;
// }

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other){
        this->type = other.getType();
    }
    return(*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat make sound: Meow meow" << std::endl;
}