/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:13:25 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/09 08:35:56 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	num_op(int num)
{
	if (num > 9)
		num_op(num / 10);
	num = (num % 10) + 48;
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	num_op(nb);
	write(1, "\n", 1);
}

int	main(void)
{
	int	nb = 875;

	ft_putnbr(nb);
}
