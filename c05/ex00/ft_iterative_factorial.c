/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:25:08 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/28 10:13:24 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
	{
		i = nb - 1;
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
}
/*int main ()
{
	printf("%d",ft_iterative_factorial(-5));
}*/
