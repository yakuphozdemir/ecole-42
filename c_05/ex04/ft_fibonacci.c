/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:25:33 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 15:45:19 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	sum;

	if (index < 0)
		return (-1);
	sum = 0;
	if (index > 1)
		sum = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if (index == 1)
		sum += 1;
	return (sum);
}

int	main(void)
{
	int	index;

	index = 8;
	printf("%d\n", ft_fibonacci(index));
}
