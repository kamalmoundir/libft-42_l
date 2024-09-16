/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:23:01 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/16 11:15:33 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc((len +1) * sizeof (char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}
