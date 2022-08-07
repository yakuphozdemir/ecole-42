/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:45:52 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/07 23:33:17 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i1;
	unsigned int i2;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i1 = ft_strlen(dest);
	i2 = 0;
	while (src[i2] != '\0' && (i1 <= size))
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i2]));
}
