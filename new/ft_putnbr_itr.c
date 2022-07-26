#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

char	get_size(int n)
{
	char	itr;

	itr = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		itr++;
	}
	return (itr);
}

void	ft_putnbr(int n)
{
	int		tmp;
	char	n_size;
	char	itr;

	if (n == -2147483648)
	{
		write(1, "-2147483648\n", 12);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	n_size = get_size(n);
	while (n_size-- > 0)
	{
		itr = 0;
		tmp = n;
		while (itr++ < n_size)
			tmp /= 10;
		ft_putchr(tmp % 10 + 48);
	}
	write(1, "\n", 1);
}
