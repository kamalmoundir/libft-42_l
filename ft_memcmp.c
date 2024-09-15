/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:17:46 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/13 18:04:19 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 =(unsigned char *)s1;
	ptr2 =(unsigned char *)s2;
	while (n && *ptr1 == *ptr2)
	{
		ptr1 ++;
		ptr2 ++;
		n --;
	}
	if(n == 0)
		return (0);
	return (*ptr1 - *ptr2);
}

int main()
{
	int t1[]={0,2,3,4};
	int t2[]={1,2,3,4};
	printf("%d",ft_memcmp(t1,t2,2));
	
}
