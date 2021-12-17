#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
     std::cout << "ScavTrap default constructor called" << std::endl;
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::~ScavTrap(){
     std::cout << "ScavTrap destructor " << name_ << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string input){
    std::cout << "ScavTrap constructor " << name_ << " called" << std::endl;
    name_ = input;
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav){
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &scav){
        name_ = scav.get_name();
        hitpoints = scav.getHitPoints();
        energyPoints = scav.getEnergyPoints();
        attackDamage = scav.getAttackDamage();
    }
    return (*this);
}

void ScavTrap::attack(std::string const &target){
    std::cout << "ScavTrap " << name_ << " attack " 
        << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name_ << " have enterred in Gate keeper mode" << std::endl;
}
