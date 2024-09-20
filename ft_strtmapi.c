/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:12:53 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/19 10:43:53 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len ;
	unsigned int	i;
	char	*result;

	len = ft_strlen(s);
	str =(char *)malloc((len + 1) * sizeof(char));
	if(!str)
		return (NULL);
	while(i < len)
	{
		result[i] = f(i,s[i]);
		i ++;	
	}
	result[i] = '\0';
	return(result);
}
