/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:06:44 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/07 23:03:33 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 1;
	if (length == 0 || length == 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			j++;
		else if (f(tab[i], tab[i + 1]) < 0)
			k++;
		else
		{
			j++;
			k++;
		}
		i++;
	}
	if (j == length || k == length)
		return (1);
	return (0);
}
