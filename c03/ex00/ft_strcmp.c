/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:48:33 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/22 16:14:24 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if ((s1[i] - s2[i]) < 0)
		result = -1;
	else if (s1[i] - s2[i] > 0)
		result = 1;
	else
		result = 0;
	return (result);
}
/*int	main()
{
	char	*s1 = "abc";
	char	*s2 = "abcs";

	int	n = ft_strcmp(s1,s2);
	printf("%d",n);
}*/
