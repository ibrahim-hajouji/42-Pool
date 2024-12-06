/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:00:00 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/19 18:42:23 by ihajouji         ###   ########.fr       */
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
			ft_putchar('A');
		if (a == x)
			ft_putchar('C');
		else if (a > 1 && a < x)
			ft_putchar('B');
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
			ft_putchar('B');
			while (i < x - 1)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('B');
		}
		b++;
		ft_putchar('\n');
	}
}
