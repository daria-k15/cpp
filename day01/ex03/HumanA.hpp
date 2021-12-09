#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &arms;
    public:
        HumanA(std::string name, Weapon &Arms);
        ~HumanA();
        void attack();
};

#endif