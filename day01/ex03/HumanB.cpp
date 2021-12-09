#include "HumanB.hpp"

HumanB::~HumanB(){};

HumanB::HumanB(std::string newName){
    name = newName;
}

void HumanB::attack(void){
    std::cout << name + " attacks with his " + this->arms->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newArms){
    arms = &newArms;
}