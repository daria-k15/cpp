#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		i;

	i = 0;
	zombies = zombieHorde(SIZE, "zombie");
	while (i < SIZE)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}
