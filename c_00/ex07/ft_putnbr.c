/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:04:58 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/25 21:56:31 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	basamak(int nb)
{
	int sayac;
	sayac = 0;
	while (nb >= 0)
	{
		nb = nb / 10;
		sayac++;
	}
	return sayac;
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, '-', 1);
	}
	nb / 10;
	
}
