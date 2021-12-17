#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other){
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->setIdeas(i, other.getIdeas(i));
		}
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

const std::string &Brain::getIdeas(int i) const{
	if (i > 0 && i < 100){
		return (this->ideas[i]);
	}
	return (this->ideas[0]);
}

void Brain::setIdeas(int i, std::string ideas){
	if (i > 0 && i < 100){
		this->ideas[i] = ideas;
	} else {
		std::cout << "Index " << i << " is out of range" << std::endl;
	}
}