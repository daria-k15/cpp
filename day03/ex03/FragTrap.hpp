#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string input);
        FragTrap(const FragTrap &other);
        FragTrap & operator=(const FragTrap &frag);
        virtual ~FragTrap();

        void highFivesGuys(void);

};

#endif
