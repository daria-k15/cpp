#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string input);
        // ScavTrap(const ScavTrap &scav);
        ScavTrap & operator=(const ScavTrap &scav);

        void guardGate();
        void attack(std::string const & target);
};

#endif