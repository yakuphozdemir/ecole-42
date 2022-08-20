/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:20:52 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/19 22:20:35 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (to_find[i2] == '\0')
		return (str);
	while (str[i1] != '\0')
	{
		while (str[i1 + i2] == to_find[i2] && str[i1 + i2] != '\0')
			i2++;
		if (to_find[i2] == '\0')
			return (str + i1);	// str[0] a i1 kadar ekle devamını yazdır demek oluyor
		i1++;
		i2 = 0;
	}
	return (0);
}
