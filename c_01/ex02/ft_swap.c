/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:55:45 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/13 21:25:59 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	e;

	e = *a;
	*a = *b;
	*b = e;
}

int	main(void)
{
	int	*p1;
	int	*p2;
	int	c;
	int	d;

	c = 20;
	d = 10;
	p1 = &c;
	p2 = &d;
	printf("BEFORE\n");
	printf("p1 in değeri	%d\np1 in adresi	%p\n\n", *p1, p1);
	printf("p2 nin değeri	%d\np2 nin adresi	%p\n\n", *p2, p2);
	ft_swap(p1, p2);
	printf("\nAFTER\n");
	printf("p1 in değeri	%d\np1 in adresi	%p\n\n", *p1, p2);
	printf("p2 nin değeri	%d\np2 nin adresi	%p\n\n", *p2, p2);
}
