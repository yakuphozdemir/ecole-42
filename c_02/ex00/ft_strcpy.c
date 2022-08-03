/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:03:34 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/01 18:07:37 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int	main()
{
	char	desti[] = "string";
	char	srci[] = "bizbiz";
	char	*dest;

	dest = ft_strcpy(desti, srci);
	printf("%s\n",dest);
}
