/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:01:07 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/17 15:22:56 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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