/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:23:23 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/28 10:32:54 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
		return (1);
	}
}
/* int main()
{
	printf("%d", ft_is_prime(4859453));
}
*/
