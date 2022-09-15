/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:07:33 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/15 16:07:33 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void    ft_putstr(char *str)
{
    while(*str)
        write(1, str, 1);
}

t_bool  ft_is_even(int nbr)
{
    return((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, int **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);
    return (SUCCESS);
}