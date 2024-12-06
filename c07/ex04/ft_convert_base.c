/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:43:50 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/06 14:46:08 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

int		value_counter(int nb, int radix);
int		char_index_in_base(char *base, char c);
int		is_base_valid(char *base);
char	*reverse_malloc(char *value);

int	ft_putnbr_base(char *base, char *nbr)
{
	int	i;
	int	sign;
	int	value;
	int	base_length;

	value = 0;
	i = 0;
	sign = 1;
	base_length = 0;
	while (base[base_length])
		base_length++;
	while (nbr[i] == '\t' || nbr[i] == '\n' || nbr[i] == '\v' || 
		nbr[i] == '\f' || nbr[i] == '\r' || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (char_index_in_base(base, nbr[i]) != -1)
		value = (value * base_length) + (char_index_in_base(base, nbr[i++]));
	return (value * sign);
}

void	ft_convert_base2(int nb,
						int index, char *value, char *base_to)
{
	int	next_index;
	int	radix;

	radix = 0;
	next_index = index + 1;
	while (base_to[radix])
		radix++;
	if (nb / radix == 0)
	{
		value[index] = base_to[nb % radix];
		value[index + 1] = '\0';
	}
	else
	{
		value[index] = base_to[nb % radix];
		ft_convert_base2(nb / radix, next_index, value, base_to);
	}
}

char	*write_to_malloc(char *base_from, char *nbr, int radix, char *base_to)
{
	int		decimal_value;
	char	*value;
	int		value_count;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	value_count = 0;
	decimal_value = ft_putnbr_base(base_from, nbr);
	if (decimal_value < 0)
	{
		sign *= -1;
		decimal_value *= -1;
		value_count++;
	}
	value_count += value_counter(decimal_value, radix);
	value = malloc(value_count * sizeof(char) + 1);
	if (value == NULL)
		return (NULL);
	if (sign == -1)
		value[i++] = '-';
	ft_convert_base2(decimal_value, i, value, base_to);
	return (value);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		radix;
	char	*value;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (0);
	radix = 0;
	while (base_to[radix])
		radix++;
	value = write_to_malloc(base_from, nbr, radix, base_to);
	value = reverse_malloc(value);
	return (value);
}

/*int	main()
{
	char nbr[] = "     +-++--7FFF";
	char base_from[] = "0123456789ABCDEF";
    char base_to[] = "01";
    char *ptr = ft_convert_base(nbr, base_from, base_to);
    printf("%s\n", ptr);
    return (0);
}*/
