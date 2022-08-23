/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 23:16:28 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/23 00:40:20 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char* str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	comp(char* str1, char* str2)
{
	int	i;
	char	c1;
	char	c2;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		c1 = str1[i];
		c2 = str2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

int	main(int argc, char** argv)
{
	int	i;
	int	hold;
	int	written;
	int	prev;

	hold = 1;
	written = 0;
	prev = 0;
	while (written < argc - 1)
	{
		i = 1;
		while (i < argc)
		{
			if (hold == prev && comp(argv[i], argv[prev]) > 0)
				hold = i;
			else if (comp(argv[hold], argv[i]) > 0 && comp(argv[i], argv[prev]) > 0)
				hold = i;
			i++;
		}
		prev = hold;
		write(1, argv[hold], ft_strlen(argv[hold]));
		write(1, "\n", 1);
		written++;
	}
	return (0);
}
