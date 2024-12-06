/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:56:28 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/17 12:47:13 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	mychar;

	mychar = 'z';
	while (mychar >= 'a')
	{
		write(1, &mychar, 1);
		mychar--;
	}
}
