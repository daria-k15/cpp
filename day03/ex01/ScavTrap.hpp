#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scav);
        ScavTrap & operator=(const ScavTrap &scav);

        void guardGate();
}

#endif