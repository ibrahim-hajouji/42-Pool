/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:30:25 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/02 18:11:22 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
/* this function is used to check if the 
 * base have the same char more than once */
int	check_double(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/*this funct should write everything */
void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

/*this is the reccursive that will write the nbr in  the base we want */
void	printnbr(int nbr, int baseValue, char *base)
{
	if (nbr < baseValue)
		ft_putchar(base[nbr]);
	else
	{
		printnbr(nbr / baseValue, baseValue, base);
		ft_putchar(base[nbr % baseValue]);
	}
}

/*this the principal function*/
void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;
	int	length;

	base_value = 0;
	length = 0;
	while (base[base_value] != '\0')
	{
		length++;
		base_value++;
	}
	base_value = 0;
	while (base[base_value] != '\0')
	{
		if (base[base_value] == '+' || base[base_value] == '-')
		{
			return ;
			base_value++;
		}
		else if (length < 2)
			return ;
		else if ((check_double(base) == 1))
			return ;
		base_value++;
	}
	printnbr(nbr, length, base);
}
/* int    main()
{
    ft_putnbr_base(42, "0123456789abcdef");
} */
