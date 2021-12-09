#include "Zombie.hpp"

int main(void){
    Zombie *zombie1;
    Zombie *zombie2;

    zombie1 = new Zombie("zombie1");
    zombie2 = new Zombie("zombie2");

    randomChump("zombie3");

    zombie1->announce();
    zombie2->announce();

    delete(zombie1);
    delete(zombie2);
    return (0);
}