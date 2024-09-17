/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:57:54 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/17 14:39:41 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s ++;
		}
		if (*s != c && *s)
		{
			count ++;
			while (*s && c != *s)
				s ++;
		}
	}
	return (count);
}

char	**add_str(char **array, char *word_start, size_t word_len, int i)
{
	array[i] = (char *)malloc((word_len + 1) * sizeof(char));
	if (!array[i])
	{
		while (i > 0)
			free(array[--i]);
		free(array);
		return (NULL);
	}
	ft_memcpy(array[i], word_start, word_len);
	array[i][word_len] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**array;
	char	*word_start;

	array = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s ++;
		if (*s != c && *s)
		{
			word_start = (char *)s;
			while (*s != c && *s)
				s ++;
			if (add_str(array, word_start, (s - word_start), i))
				return (NULL);
			i ++;
		}
	}
	array[i] = NULL;
	return (array);
}
