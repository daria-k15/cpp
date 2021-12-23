#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    private:
        Animal(const Animal &other);
        Animal & operator=(const Animal &other);
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();

        const std::string &getType() const;
        virtual void makeSound() const = 0;
};

#endif