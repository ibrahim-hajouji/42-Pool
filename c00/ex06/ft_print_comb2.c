/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:57:29 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/17 13:03:45 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_int(int i)
{
	char	first;
	char	second;

	first = '0';
	if (i <= 9)
	{
		second = '0' + i;
	}
	else
	{
		first = i / 10 + '0';
		second = i % 10 + '0';
	}
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_int(a);
			write(1, " ", 1);
			ft_print_int(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
