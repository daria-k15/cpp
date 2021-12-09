#include "HumanA.hpp"

HumanA::~HumanA(){};


HumanA::HumanA(std::string newName, Weapon &newArms) : arms(newArms){
    name = newName;
}

void HumanA::attack(void){
    std::cout << name + " attacks with his " + this->arms.getType() << std::endl;
}