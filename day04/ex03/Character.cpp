#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < NUM; i++){
        inventory[i] = NULL;
    }
}

Character::~Character(){
    for (int i = 0; i < NUM; i++){
        if (inventory[i])
            delete inventory[i];
    }
}

Character::Character(const Character &other){
    *this = other;
}

Character::Character(std::string name) : name_(name){
    for (int i= 0; i < NUM; i++){
        inventory[i] = NULL;
    }
}

Character &Character::operator=(const Character &other){
    if (this != &other){
        name_ = other.getName();
        for(int i = 0; i < NUM; i++){
            const AMateria *tmp = other.getMateria(i);
            if (inventory[i])
                inventory[i] = tmp->clone();
            else
                inventory[i] = NULL;
        }
    }
        return(*this);
}

std::string const &Character::getName() const{
    return(name_);
}

const AMateria *Character::getMateria(int index) const{
    if (index >= 0 && index < 4){
        return(inventory[index]);
    }
    return(NULL);
}

void Character::equip(AMateria *m){
    for (int i = 0; i < NUM; i++){
        if (!inventory[i]){
            inventory[i] = m;
            break ;
        }
    }
}

void Character::unequip(int index){
    if (index < 0 && index > 4)
        return ;
    else{
        inventory[index] = NULL;
        for (int i = index + 1; i < NUM; i++){
            if (!inventory[i])
                break ;
            inventory[i - 1] = inventory[i];
            inventory[i] = NULL;
        }
    }
}

void Character::use(int index, ICharacter &target){
    if (!(index >= 0 && index < 4) || !inventory[index])
        return ;
    inventory[index]->use(target);
}