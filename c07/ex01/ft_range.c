/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:57:15 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/31 18:42:57 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	tab = (int *)malloc (sizeof(int) * (max - min));
	if ((min >= max) || tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = min;
	while (i < (max - min))
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
/*
int main()
{
	int	min = 5;
	int	max = 10;

	int *result = ft_range(min,max);
	if (result == '\0')
	printf("memory allocation failed or min greater than max ");
	else
	printf("result : ");
	for (int i = 0; i < (max - min); i++)
	printf("d", result[i]);
	printf("\n");
	free(result);
	
}*/