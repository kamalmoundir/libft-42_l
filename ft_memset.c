/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:00:43 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/13 10:16:25 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void *ft_memset(void *str,int c,int n)
{

	char *s;
	int i;

	s = (unsigned char *)str;
	i = 0;

	while(i < n)
	{
		s[i] = (unsigned char)c;
		printf("%i",s[i]);
		i ++;
	}
	return (str);	
}
