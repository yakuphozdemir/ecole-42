/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:34:26 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/20 22:50:30 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	if (nb == 1)
		return (1);
	num = 0;
	while (num < (nb / 2))
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}

int	main(void)
{
	int	nb;

	nb = 3;
	printf("%d\n", ft_sqrt(nb));
}
