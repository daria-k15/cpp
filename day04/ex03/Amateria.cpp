#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "Amateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type){};

AMateria::~AMateria(){
    std::cout << "Amateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other){
    std::cout << "Amateria copy constructor called" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other){
    if (this != &other){
        this->type_ = other.getType();
    }
    return (*this);
}

std::string const &AMateria::getType() const{
    return(type_);
}

void AMateria::use(ICharacter &target){
    
}