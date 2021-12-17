#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &frag){
    if (this != &frag){
        name_ = frag.get_name();
        hitpoints = frag.getHitPoints();
        energyPoints = frag.getEnergyPoints();
        attackDamage = frag.getAttackDamage();
    }
    return(*this);
}

FragTrap::~FragTrap(){
    std::cout << "Fragtrap destructor " << name_ << " called" << std::endl;
}

FragTrap::FragTrap(const std::string input){
    std::cout << "FragTrap constructor " << name_ << " called" << std::endl;
    name_ = input;
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << name_ << " said High fives guys!" << std::endl;
} 
