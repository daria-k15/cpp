#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog & operator=(const Dog &other);
        virtual ~Dog();

        virtual void makeSound() const;

        const Brain *getBrain() const;
        const std::string &getBrainIdea(int i) const;
        void setBrainIdea(std::string idea, int i);

};

#endif