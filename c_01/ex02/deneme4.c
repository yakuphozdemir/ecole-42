/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:55:45 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 19:53:12 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;
	int e;

	c = 10;
	d = 20;
	a = &c;
	b = &d;
	printf("a nın değeri	%d\n a nın adresi	%p\n\n", *a, a);
	printf("b nın değeri	%d\n b nın adresi	%p\n\n", *b, b);
	e = *a;
	*a = *b;
	*b = e;
	
	printf("%d\n%d\n", *a, *b);
}

int	main()
{
	ft_swap();
}



