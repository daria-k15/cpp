#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap Bob("Bob");
    std::cout << "DiamondTrap name: " << Bob.get_name() << std::endl;
    std::cout << "DiamondTrap has: " << Bob.getHitPoints() << " hitpoints" << std::endl;
    std::cout << "DiamondTrap has: " << Bob.getEnergyPoints() << " energy points" << std::endl;
    std::cout << "DiamondTrap has: " << Bob.getAttackDamage() << " attack damage" << std::endl;

    Bob.attack("lol");
    Bob.whoAmI();
    Bob.takeDamage(5);
    Bob.beRepaired(15);
    Bob.highFivesGuys();
    Bob.guardGate();
}
