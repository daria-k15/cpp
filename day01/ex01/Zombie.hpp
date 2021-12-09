#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define SIZE 10
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Zombie{
    private:
        std::string name;
    public:
        ~Zombie(void);
        Zombie();
        void announce(void);
        std::string getName(){return(name);}
        void setName(std::string name){this->name = name;}
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif