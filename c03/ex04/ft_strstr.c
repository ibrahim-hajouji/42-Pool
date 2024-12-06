/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:11:59 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/22 17:04:17 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*null;

	null = 0;
	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (null);
}
/*int main()
{
    char str[] = "tetouan";
    char str1[] = "ouan";
    char    *res = ft_strstr(str,str1);
    printf("%s",res);
}*/
