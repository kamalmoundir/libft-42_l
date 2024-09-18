/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:20:04 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/18 17:08:35 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_int(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	str_implement(char *nbr, int n, int len, int is_negative)
{
	nbr[len] = '\0';
	len--;
	while (len >= is_negative)
	{
		nbr[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (is_negative)
		nbr[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = (n < 0);
	if (is_negative)
		n *= -1;
	len = len_int(n) + is_negative;
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	str_implement(nbr, n, len, is_negative);
	return (nbr);
}
