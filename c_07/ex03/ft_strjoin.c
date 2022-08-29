/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:46:17 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/30 00:22:13 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_size(char **str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	num;

	i = 0;
	while (*str[i] != '\0')
	{
		while (str[i][j] != '\0')
			j++;
		num += j;
		j = 0;
		i++;
	}
	return (num);
}

unsigned int	ft_count(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str;
	int				i;
	int				j;
	int				k;
	unsigned int	mag;

	//*str = "";
	//if (size = 0)
	//	return (str);
	mag = ft_size(strs) + (ft_count(sep) * (size - 1)) + 1;
	str = (char *) malloc(mag * sizeof(char));
	i = 0;
	j = 0;
	k = 0;
	while (k < mag)
	{
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0')
			str[k++] = sep[j++];
		j = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char	*strs[] = {"ben", "sen", "o", "biz", "siz", "onlar"};
	char	sep[] = " ";
	int		size;
	char	*str;

	size = 6;
	str = ft_strjoin(size, strs, sep);
	printf("%s\n", str);
}
