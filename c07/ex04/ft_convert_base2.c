/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:46:40 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/06 11:15:41 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	value_counter(int nb, int radix)
{
	if (nb / radix == 0)
		return (1);
	else
		return (1 + value_counter(nb / radix, radix));
}

int	char_index_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		base_length++;
	if (base_length <= 1)
		return (0);
	i = 0;
	while (i < base_length)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*reverse_malloc(char *value)
{
	int		value_length;
	char	*reversed_value;
	int		i;
	int		j;

	value_length = 0;
	i = 0;
	j = 0;
	while (value[value_length])
		value_length++;
	reversed_value = malloc((value_length * sizeof(char)) + 1);
	if (reversed_value == NULL)
		return (NULL);
	if (value[0] == '-')
	{
		i = 1;
		reversed_value[0] = '-';
	}
	j = value_length - 1;
	while (i < value_length)
		reversed_value[i++] = value[j--];
	reversed_value[i] = '\0';
	free(value);
	return (reversed_value);
}
