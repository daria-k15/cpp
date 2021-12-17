#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("no name_clap_name"), name_("no name"){
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->FragTrap::hitpoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name_(name){
    std::cout << "DiamondTrap constructor " << name_ << " called" << std::endl;
    this->FragTrap::hitpoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    if (this != &other){
        name_ = other.get_name();
        this->ClapTrap::name_ = other.getClapName();
        hitpoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getAttackDamage();
    }
    return(*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor " << name_ << " called" << std::endl;
}

const std::string &DiamondTrap::get_name() const{return(name_);}
const std::string &DiamondTrap::getClapName() const{return(this->ClapTrap::get_name());}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << get_name() << std::endl;
    std::cout << "ClapTrap name: " << getClapName() << std::endl;
}

void DiamondTrap::attack(std::string const &target){
    this->ScavTrap::attack(target);
}
