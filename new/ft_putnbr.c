#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	rec_nbr(int n)
{
	if (n > 9)
		rec_nbr(n / 10);
	ft_putchr((n % 10) + 48);
}

void	ft_putnbr(int n)
{
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
	rec_nbr(n);
	write(1, "\n", 1);
}
