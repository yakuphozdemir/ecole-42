/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:02:38 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/03 18:04:36 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && str[i] >= 97 && str[i] <= 122)	// büyütme
		{
			str[i] = str[i] - 32;
			j = 1;
		}
		else if(j == 1 && (str[i] >= 65 && str[i] <= 90))	// küçültme
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char	str[] = "hamdolsun bu gunleride* gorduk Eger ki 23gormemisolsa idik +yinehakkimizde 46-'hayirlisi";
	char	*final;

	final =  ft_strcapitalize(str);

	printf("%s\n", final);
}
