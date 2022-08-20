/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:17:13 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/14 15:17:02 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
		i++;
	return (i);
}

int	main(void)
{
	char	*str;

	str = "string";
	printf("%d\n", ft_strlen(str));
}
