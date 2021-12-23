#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){};

Cure::~Cure(){};

Cure::Cure(const Cure &other){*this = other;}

Cure &Cure::operator=(const Cure &other){
    if (this != &other){
        type_ = other.getType();
    }
    return(*this);
}

AMateria *Cure::clone() const{
    return(new Cure(*this));
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}