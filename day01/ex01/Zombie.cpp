#include "Zombie.hpp"

Zombie::Zombie(){} 

Zombie::~Zombie(void){
    std::cout << name << " is dead" << std::endl;
}

void Zombie::announce(void){
    std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}