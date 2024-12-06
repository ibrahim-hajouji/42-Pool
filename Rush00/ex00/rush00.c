/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:16:52 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/19 18:44:54 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	horizontal(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('o');
		if (a == x)
			ft_putchar('o');
		else if (a > 1 && a < x)
			ft_putchar('-');
	a++;
	}
}

void	rush(int x, int y)
{
	int	b;
	int	i;

	if (x == 0 || y == 0)
		return ;
	horizontal(x);
	b = 1;
	while (b <= y)
	{
		if (b == y)
			horizontal(x);
		else if (b > 1 && b < y)
		{
			i = 1;
			ft_putchar('|');
			while (i < x - 1)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('|');
		}
		b++;
		ft_putchar('\n');
	}
}
