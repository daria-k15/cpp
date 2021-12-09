#ifndef HUMAN_B
#define HUMAN_B
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *arms;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &newArms);
};

#endif