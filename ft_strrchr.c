/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:45:37 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/13 13:38:18 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurence;

	last_occurence = NULL;
	if (c == 0)
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			last_occurence = (char *) s;
		s ++;
	}
	return (last_occurence);
}
