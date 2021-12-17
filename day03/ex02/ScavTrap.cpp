#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
     std::cout << "ScavTrap default constructor called" << std::endl;
    name = "no name";
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::~ScavTrap(){
     std::cout << "ScavTrap destructor " << name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string input){
    std::cout << "ScavTrap constructor " << name << " called" << std::endl;
    name = input;
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scav;
}

void ScavTrap::attack(std::string const &target){
    std::cout << "ScavTrap " << name << " attack " 
        << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav){
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &scav){
        name = scav.getName();
        hitpoints = scav.getHitPoints();
        energyPoints = scav.getEnergyPoints();
        attackDamage = scav.getAttackDamage();
    }
    return (*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}