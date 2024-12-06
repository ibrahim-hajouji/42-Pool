/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:51:03 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/28 10:21:30 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		p = 1;
		i = 0;
		while (i < power)
		{
			p = nb * p;
			i++;
		}
		return (p);
	}
}
/* int main()
{
	printf("%d", ft_iterative_power(5,3));
}*/
