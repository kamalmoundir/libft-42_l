/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:23:53 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/12 12:57:35 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
void bzero(void *s, size_t n)
{
        int i;
        unsigned char *str;

        i = 0;
        str = (unsigned char *)s;
        while(n --)
        {
                (*str)= 0;
                str ++;
        }
}


int main()
{
 char str[] = "test";   
            
 bzero( str, 2);

 printf("%s",str);
}
