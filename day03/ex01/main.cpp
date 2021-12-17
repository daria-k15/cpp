#include "ScavTrap.hpp"

int main(void){
    /*ClapTrap john("John");

    std::cout << "ClapTrap's name: " << john.getName() << std::endl;
    std::cout << "ClapTrap has: " << john.getHitPoints() << " hitpoints" << std::endl;
    std::cout << "ClapTrap has: " << john.getEnergyPoints() << " energy points" << std::endl;
    std::cout << "ClapTrap has: " << john.getAttackDamage() << " attack damage" << std::endl;

    john.attack("bob");
    john.takeDamage(5);
    john.beRepaired(15);
    john.takeDamage(20);
    john.beRepaired(50);*/

    ScavTrap Bob("Bob");
    std::cout << "ScavTrap name: " << Bob.getName() << std::endl;
    std::cout << "ScavTrap has: " << Bob.getHitPoints() << " hitpoints" << std::endl;
    std::cout << "ScavTrap has: " << Bob.getEnergyPoints() << " energy points" << std::endl;
    std::cout << "ScavTrap has: " << Bob.getAttackDamage() << " attack damage" << std::endl;

    Bob.attack("attack");
    Bob.takeDamage(15);
    Bob.beRepaired(5);
    Bob.guardGate();
    Bob.takeDamage(20);
    Bob.beRepaired(50);
}