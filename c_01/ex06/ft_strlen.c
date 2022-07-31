/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:17:13 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/30 21:22:07 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
		i++;
	printf("%d\n", i);
}

int	main()
{
	char	*str;

	str = "string";
	ft_strlen(str);
}
