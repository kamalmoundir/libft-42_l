#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int     ft_isdigit(char c);
int     ft_atoi(const char *nptr);
size_t   ft_strlcat(char *dest, const char *src, size_t size);
void    *ft_calloc(size_t nmemb, size_t size);
void    ft_bzero(void *s, size_t n);
#endif
