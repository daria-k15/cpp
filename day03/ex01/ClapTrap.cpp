#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("no name"), hitpoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap constructor " + name + " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &clap){
        name = clap.getName();
        hitpoints = clap.getHitPoints();
        energyPoints = clap.getEnergyPoints();
        attackDamage = clap.getAttackDamage();
    }
    return (*this);
}

const std::string &ClapTrap::getName(void) const {return(name);}
unsigned int ClapTrap::getHitPoints(void) const {return(hitpoints);}
unsigned int ClapTrap::getEnergyPoints(void) const {return(energyPoints);}
unsigned int ClapTrap::getAttackDamage(void) const {return(attackDamage);}

void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << name << " attack " 
        << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    hitpoints = (hitpoints < amount ? 0 : hitpoints - amount);
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage! " 
    << hitpoints << " points is left!" << std::endl;
    if (hitpoints == 0){
        energyPoints -= 1;
        std::cout << "ClapTrap " << name << " took " << 1 << " points of energy! " 
            << energyPoints << " points is left!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    hitpoints += amount;
    std::cout << "ClapTrap " << name << " got " << amount << " points! " 
    << hitpoints << " is left!" << std::endl;
}