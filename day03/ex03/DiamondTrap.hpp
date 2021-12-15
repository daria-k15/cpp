#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
            std::string diamondName;
    public:
            DiamondTrap();
            DiamondTrap(std::string diamondName);
            // DiamondTrap(const DiamondTrap &other);
            DiamondTrap &operator=(const DiamondTrap &other);
            virtual ~DiamondTrap();
			const std::string &getDiamondName() const;
			const std::string &getClapName() const;
			void whoAmI();
			void attack(std::string const &target);
};

#endif