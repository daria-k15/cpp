#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    // private:
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &other); // change this one to private!!!
        Animal & operator=(const Animal &other); // change this one to private!!!

        const std::string &getType() const;
        virtual void makeSound() const = 0;
};

#endif