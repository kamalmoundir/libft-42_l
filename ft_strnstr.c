/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:18:30 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/20 19:56:54 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	pos;

	i = 0;
	pos = 0;
	if (!*little)
		return ((char *)big);
	while (big[pos] && pos < len)
	{
		i = 0;
		if (big[pos] == little[i])
		{
			while (big[pos + i] == little[i] && big[pos + i] && pos + i < len)
			{
				i++;
			}
			if (little[i] == '\0')
				return ((char *)big + pos);
		}
		pos++;
	}
	return (NULL);
}
