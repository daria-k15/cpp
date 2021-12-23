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
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other){
        type = other.getType();
        Brain *newBrain = new Brain();
        *newBrain = *(other.brain);
        brain = newBrain;
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete brain;

}

void Cat::setBrainIdea(std::string idea, int i){
    brain->setIdeas(i, idea);
}

const std::string &Cat::getBrainIdea(int i) const{
    return(brain->getIdeas(i));
}

void Cat::makeSound() const{
    std::cout << "Cat make sound: Meow meow" << std::endl;
}

const Brain *Cat::getBrain() const{return(this->brain);}