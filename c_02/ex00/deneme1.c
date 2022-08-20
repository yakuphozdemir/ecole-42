/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:03:34 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/15 16:25:58 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "sozcuk";
	char	b[] = "kelime";

	strcpy(a, b);
	int	i = 0;
	while (i < 6)
	{
		printf("%c", a[i]);
		i++;
	}
	printf("\n");
}
