/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:09:16 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/02 13:42:52 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	total_length(int size, char *str1[], char str2[])
{
	int		total;
	int		i;

	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(str1[i]);
		if (i < size - 1)
			total = total + ft_strlen(str2);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size == 0)
	{
		result = (char *) malloc (1);
		if (result != NULL)
			result[0] = '\0';
		return (result);
	}
	result = (char *) malloc (total_length(size, strs, sep) + 1);
	if (result != '\0')
	{
		result[0] = '\0';
		i = 0;
		while (i < size)
		{
			ft_strcat(result, strs[i]);
			if (i < size - 1)
				ft_strcat(result, sep);
			i++;
		}
	}
	return (result);
}

/*int main()
{
  char *strs[] = {"paid", "the", "cost" , "to", "be" , "the", "best"};
  char  *sep = "--";
  char  *ptr = ft_strjoin((sizeof(strs)/sizeof(char *)),strs,sep);
  printf("%s", ptr );
  return 0;
}*/
