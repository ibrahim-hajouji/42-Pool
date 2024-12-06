/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:15:31 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/25 23:14:25 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_atoi(char *str)
{
	int	number;
	int	parity;

	number = 0;
	parity = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}
	if ((parity % 2) == 0)
		return (number);
	else
		return (-number);
}
/*int	main()
{

	char	*str = "	 	 ----+-+-++--8-1234444abcd485";
	printf("%d",ft_atoi(str));
}*/
