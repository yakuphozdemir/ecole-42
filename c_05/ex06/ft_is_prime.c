/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:55:07 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 23:12:36 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	factor;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	factor = 2;
	while (factor <= (nb / 2))
	{
		if (nb % factor == 0)
			return (0);
		factor++;
	}
	return (1);
}

int	main(void)
{
	int	nb;

	nb = 9;
	printf("%d\n", ft_is_prime(nb));
}
