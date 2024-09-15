/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:37:10 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/13 17:16:49 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;

	ptr = (const char *)s;
	while(n)
	{
		if(*ptr == (const char)c)
			return ((void *)ptr);
		n --;
		ptr ++;
	}
	return (NULL);
}
