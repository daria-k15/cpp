#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string input);
        FragTrap & operator=(const FragTrap &frag);

        void highFivesGuys(void);
        void attack(std::string const &target);

};

#endif