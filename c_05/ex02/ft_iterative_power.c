/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:45:35 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 14:56:33 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	else if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = -1;
	printf("%d\n", ft_iterative_power(nb, power));
}
