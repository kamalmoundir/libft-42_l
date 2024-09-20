/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoundir <kmoundir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:16:09 by kmoundir          #+#    #+#             */
/*   Updated: 2024/09/19 13:08:13 by kmoundir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{	

	if(n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else 
    {	
	    if(n < 0)
		{
			ft_putchar_fd('-',fd);
		    n *= -1;
		}		
      	if(n >= 9)
	    {
		  ft_putnbr_fd(n / 10 ,fd);
		  ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd((n % 10) + '0' , fd);
	}
}

int main()
{
	int fd;
	char *filename = "test_output.txt";
	int test_int = 2147483647;
	char buffer[50];
	ssize_t bytes_read;

 // Open file for writing
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error opening file for writing");
		return 1;
	}

	// Write test string to file
	ft_putnbr_fd(test_int, fd);
	close(fd);
	return 0;
}