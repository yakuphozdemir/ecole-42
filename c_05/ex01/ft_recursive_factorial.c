/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:18:48 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 14:45:08 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	else if (nb == 0)
		return (1);
	return (result);
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
}
