/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:58:48 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 15:25:01 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		return (0);
	return (result);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 1;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
}
