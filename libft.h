#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int     ft_isdigit(char c);
int     ft_atoi(const char *nptr);
size_t   ft_strlcat(char *dest, const char *src, size_t size);

#endif
