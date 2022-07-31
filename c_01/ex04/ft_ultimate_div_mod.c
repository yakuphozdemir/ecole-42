/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:43:25 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 20:37:13 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dev;
	int	mod;
	if (*b != 0 && a != 0 && b != 0)
	{
		dev = *a / *b;
		mod = *a % *b;
		*a = dev;
		*b = mod;
	}
}

int	main()
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 100;
	j = 5;
	a = &i;
	b = &j;
	ft_ultimate_div_mod(a, b);
	printf("%d\n%d\n", i, j);
}
