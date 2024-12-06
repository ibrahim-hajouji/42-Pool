/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:44:52 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/29 19:45:59 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		i = nb + 1;
		while (!ft_is_prime(i))
			i++;
		return (i);
	}
}
/*int main ()
{
    printf("%d",ft_find_next_prime(45555));
}*/
