/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:15:39 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/05 08:55:08 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"
#include <stdio.h> 
/*struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);*/

void	ft_putnbr(int nb)
{
	char	d;

	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		d = nb % 10 + '0';
		write(1, &d, 1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		d = '0' + nb;
		write(1, &d, 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*int main (int argc, char **argv)
{
	if (argc < 2)
    {
        printf("Usage: %s WRITE THE FUCKING ARGUMENTS -_- \n", argv[0]);
        return 1;
    }
	t_stock_str *result = ft_strs_to_tab(argc , argv);
	if (result == NULL)
    {
        printf("Memory allocation failed.\n");
		return 1;
    }
	ft_show_tab(result);
}*/
