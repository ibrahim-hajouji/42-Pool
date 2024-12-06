/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:32:06 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/07 23:04:50 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

int	ope(int n1, char c, int n2)
{
	int	result;

	if (c == '+')
		result = n1 + n2;
	else if (c == '-')
		result = n1 - n2;
	else if (c == '*')
		result = n1 * n2;
	else if (c == '/')
		result = n1 / n2;
	else if (c == '%')
		result = n1 % n2;
	else
		result = 0;
	return (result);
}

int	main(int ac, char *av[])
{
	int		result;
	int		num1;
	int		num2;

	if (ac != 4)
		return (0);
	else
	{
		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		if (num2 == 0 && av[2][0] == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		else if (num2 == 0 && av[2][0] == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		else
			result = ope(num1, av[2][0], num2);
		ft_putnbr(result);
		write(1, "\n", 1);
	}
}
