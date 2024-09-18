/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:20:04 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/17 18:43:19 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	
#include <limits.h>

int	len_int_positif(int n)
{
	int	i;
	
	i = 0;
	if(n == 0)
		return (1);
	while(n)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nbr;

}

int main()
{
	printf("%d \n%d",len_int(INT_MIN),INT_MIN);
}
