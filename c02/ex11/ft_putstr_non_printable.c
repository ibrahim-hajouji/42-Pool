/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 07:44:06 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/22 09:45:15 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* #include <stdio.h> */ 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	remainder;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(str[i] / 16 + '0');
			remainder = str[i] % 16;
			if (remainder < 10)
				ft_putchar(remainder + '0');
			else
				ft_putchar(remainder + 'a' - 10);
		}
		i++;
	}
}
/* int main()
{
  char str[] = "Hello\n there";
  char *strstr = ft_putstr_non_printable(str);
  printf("%s",strstr);
  return (0);
}*/ 
