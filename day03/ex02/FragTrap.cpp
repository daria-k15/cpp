#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    name = "no name";
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "Fragtrap destructor " << name << " called" << std::endl;
}

FragTrap::FragTrap(const std::string input){
    std::cout << "FragTrap constructor " << name << " called" << std::endl;
    name = input;
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

void FragTrap::attack(std::string const &target){
    std::cout << "FragTrap " << name << " attack " << target 
    << ", causing " << attackDamage << " points of damage" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << name << " said High fives guys!" << std::endl;
} 