/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:13:26 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 23:37:47 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	factor;

	if (nb <= 1)
		return (0);
	factor = 2;
	while (factor <= (nb / 2))
	{
		if (nb % factor == 0)
			return (0);
		factor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int	main(void)
{
	int	nb;

	nb = 18;
	printf("%d\n", ft_find_next_prime(nb));
}
