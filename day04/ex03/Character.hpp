#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define NUM 4

class Character : public ICharacter{
    private:
        std::string name_;
        AMateria *inventory[NUM];
        Character();
    public:
        virtual ~Character();
        Character(const Character &other);
        Character & operator=(const Character &other);
        Character(std::string name);
        const AMateria *getMateria(int index) const;
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int index);
        void use(int index, ICharacter &target);
};

#endif