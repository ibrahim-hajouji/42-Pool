/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:55:07 by ihajouji          #+#    #+#             */
/*   Updated: 2023/08/27 22:50:49 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	arg_len(char *s1)
{
	int	j;

	j = 0;
	while (s1[j] != '\0')
		j++;
	return (j);
}

void	ft_print(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		write(1, &av[i][j], arg_len(av[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		cmp;

	j = argc - 1;
	if (argc > 1)
	{
		while (j > 0)
		{
			i = 1;
			while (i < argc - 1)
			{
				cmp = ft_strcmp(argv[i], argv[i + 1]);
				if (cmp > 0)
					swap(&argv[i], &argv[i + 1]);
				i++;
			}
			j--;
		}
	}
	ft_print(argc, argv);
}
