#include <stdlib.h>

void	ft_putnbr(int n);

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		ft_putnbr(atoi(av[i]));
	return (0);
}
