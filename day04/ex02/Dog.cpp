#include "Dog.hpp"

Dog::Dog(){
    std::cout <<"Dog default constructor called" << std::endl;
    type = "Dog";
    try{
        brain = new Brain();
    } catch(const std::exception &e){
        std::cout << e.what() << "\n";
        throw ;
    }
}

Dog::Dog(const Dog &other){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other){
        type = other.getType();
        Brain *newBrain = new Brain();
        *newBrain = *(other.brain);
        brain = newBrain;
    }
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::setBrainIdea(std::string idea, int i){
    brain->setIdeas(i, idea);
}

const std::string &Dog::getBrainIdea(int i) const{
    return (brain->getIdeas(i));
}

void Dog::makeSound() const {
    std::cout << "Dog make sound: Bow-wow" << std::endl;
}

const Brain *Dog::getBrain() const{return(this->brain);}
