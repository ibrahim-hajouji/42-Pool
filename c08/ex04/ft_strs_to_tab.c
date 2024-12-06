/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:41:02 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/04 14:10:47 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h" 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *) malloc (sizeof(char *) * (i + 1));
	i = 0;
	if (dest == '\0')
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = (t_stock_str *) malloc (sizeof(t_stock_str) * (ac + 1));
	if (result == '\0')
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strcpy(av[i]);
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}

/*int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s WRITE THE FUCKING ARGUMENTS -_- \n", argv[0]);
        return 1;
    }

    t_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);

    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < argc - 1; i++)
    {
        printf("String: %s\n", result[i].str);
        printf("Size: %d\n", result[i].size);
        printf("Copy: %s\n", result[i].copy);
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < argc - 1; i++)
    {
        free(result[i].copy);
    }
    free(result);

    return 0;
}*/
