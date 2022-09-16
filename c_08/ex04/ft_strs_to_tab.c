/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:20:59 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/16 12:20:59 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_str_length(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
        index++;
    return (index);
}

char *ft_strdup(char *src)
{
    int     i;
    int     size;
    char    *src2;

    size = 0;
    while (src[size] != '\0')
        size++;
    src2 = (char *) malloc((size + 1) * sizeof(char));
    i = 0;
    while (i < size)
    {
        src2[i] = src[i];
        i++;
    }
    src2[i] = 0;
    return (src2);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int                 index;
    t_stock_str  *array;
    t_stock_str  *e;

    e = (array = malloc((ac + 1) * (sizeof(struct s_stock_str))));
    if(!e)
        return (NULL);
    index = 0;
    while (index < ac)
    {
        array[index].size = ft_str_length(av[index]);
        array[index].str = av[index];
        array[index].copy = ft_strdup(av[index]);
        index++;
    }
    array[index].str = 0;
    array[index].copy = 0;
    return (array);
}

int main(int argc, char **argv)
{
    int                 index;
    struct s_stock_str  *structs;

    structs = ft_strs_to_tab(argc, argv);
    index = 0;
    while (index < argc)
    {
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
    }
}