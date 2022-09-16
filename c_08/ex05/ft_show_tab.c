/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:59:49 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/17 00:59:49 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../ex04/ft_strs_to_tab.c"
#include "ft_stock_str.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
}

void    ft_putnbr(int num)
{
    if (num == -2147483648)
        write(1, "-2147483648", 11);
    else if (num < 0)
    {
        num *= -1;
        write(1, '-', 1);
        ft_putnbr(num);
    }
    else if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar(num + 48);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int index;

    index = 0;
    while (par[index].str != 0)
    {
        ft_putstr(par[index].str);
        ft_putchar("\n");
        ft_putnbr(par[index].size);
        ft_putchar("\n");
        ft_putstr(par[index].copy);
        ft_putchar("\n");
        index++;
    }
}

int main(int argc, char **argv)
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
}