/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:57:54 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/16 16:58:09 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int	ft_count_word(char const *s , char c)
{
	int	count;

	count = 0;
	while(*s)
	{
		while(*s == c && *s)
		{
		 s ++;
		}
		if(*s != c &&  *s)
			count ++;
		while(*s && c != *s)
			s ++;	
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	

}

int main()
{
	printf("%d", ft_count_word("        test test test     ",'t'));
}
