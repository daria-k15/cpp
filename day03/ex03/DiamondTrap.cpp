#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("no name_clap_name"), diamondName("no name"){
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->FragTrap::hitpoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clap_name"), diamondName(name){
    std::cout << "DiamondTrap constructor " << diamondName << " called" << std::endl;
    this->FragTrap::hitpoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->FragTrap::attackDamage = 30;
}

// DiamondTrap::DiamondTrap(const DiamondTrap &other){
//     std::cout << "DiamondTrap copy constructor called" << std::endl;
//     *this = other;
// }

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    if (this != &other){
        diamondName = other.getDiamondName();
        this->ClapTrap::name_ = other.getClapName();
        hitpoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getEnergyPoints();
    }
    return(*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor " << diamondName << " called" << std::endl;
}

const std::string &DiamondTrap::getDiamondName() const{return(diamondName);}
const std::string &DiamondTrap::getClapName() const{return(this->ClapTrap::getName());}

void DiamondTrap::whoAmI(){
    std::cout << "Diamond name: " << getDiamondName() << std::endl;
    std::cout << "ClapTrap name: " << getClapName() << std::endl;
}

void DiamondTrap::attack(std::string const &target){
    this->ScavTrap::attack(target);
}