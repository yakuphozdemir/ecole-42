/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:17:13 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 21:22:33 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(*str == '\0'))
	{
		str++;
		i++;
	}
	printf("%d\n", i);
}

int	main()
{
	char	*str;

	str = "string";
	ft_strlen(str);
}
