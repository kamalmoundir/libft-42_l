/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:52:50 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/15 15:18:14 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t   ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t	len;
    size_t	i;
    size_t	j;

    len = ft_strlen(src) + ft_strlen(dest);
    if (size <= ft_strlen(dest))
        return (size + ft_strlen(src));
    i = 0;
    j = ft_strlen(dest);
    while (src[i] && j < size - 1)
    {
        dest[j++] = src[i++];
    }
    dest[j] = '\0';
    return (len);
}
