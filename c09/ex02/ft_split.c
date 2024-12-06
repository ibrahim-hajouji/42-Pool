/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:30:16 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/04 15:22:30 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	charset_in_string(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*allocation(char *str, char *charset, int index)
{
	int		i;
	int		j;
	int		count;
	char	*result;

	count = 0;
	i = 0;
	j = index;
	while ((str[j] != '\0') && (!charset_in_string(charset, str[j])))
	{
		count++;
		j++;
	}
	result = (char *) malloc (sizeof(char) * (count + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		result[i] = str[index];
		i++;
		index++;
	}
	result[i] = '\0';
	return (result);
}

int	string_count(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!charset_in_string(charset, str[i]))
		{
			count++;
			while (str[i] != '\0' && !charset_in_string(charset, str[i]))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	word_count = string_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (!charset_in_string(charset, str[i]))
		{
			result[j] = allocation(str, charset, i);
			j++;
			while (str[i] != '\0' && !charset_in_string(charset, str[i]))
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
/*
int	main() {
    char str[] = "   This is a sample;string,split by;characters nbnb  ;; ,3";
    char charset[] = " ,;";

    char **result = ft_split(str, charset);

    // Print the resulting array of substrings.
    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]); // Free the memory allocated for each substring.
        i++;
    }

    free(result); // Free the memory allocated for the array of pointers.

    return 0;
}
*/
