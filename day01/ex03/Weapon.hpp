#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        void setType(std::string type){this->type = type;}
        std::string &getType(){return(type);}
        ~Weapon();
        Weapon(std::string type);
};

#endif