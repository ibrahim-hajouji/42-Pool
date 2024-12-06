/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:24 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/31 22:22:54 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	j = 0;
	i = 0;
	n = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	total = i + j;
	if (j >= size)
		return (size + i);
	while ((src[n] != '\0') && (j < (size - 1)))
	{
		dest[j] = src[n];
		j++;
		n++;
	}
	dest[j] = '\0';
	return (total);
}
/*int main()
{
	char	s1[8] = "hello, ";
	char	s2[45] = "hru?";
	unsigned int	result = ft_strlcat(s1, s2, 12);
	printf("%u", result);
}*/
