/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:40:26 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/14 14:43:16 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int	nbr;
	int	i;
	int sign;

	i = 0;
	nbr = 0;
	sign =1 ;
	while((nptr[i] <= 13 && nptr[i] >= 8) || nptr[i] == ' ')
		i++;
	if(nptr[i] =='-' || nptr[i]== '+')
	{
		if (nptr[i] == '-')
			sign = -1;
			i ++;
	}
	while(nptr[i] && ft_isdigit(nptr[i]))
	{
		nbr *= 10;
		nbr += nptr[i] - '0';
		i ++;
	}
	return (nbr*sign);
}