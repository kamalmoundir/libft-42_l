#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

int     ft_atoi(const char *nptr);
size_t   ft_strlcat(char *dest, const char *src, size_t size);
void    *ft_calloc(size_t nmemb, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
int ft_isalpha(int c);
int  ft_isalnum(int c);
int  ft_isascii(int c);
int  ft_isprint(int c);
int  ft_toupper(int c);
char  ft_tolower(char c);
int ft_isdigit(int c);
#endif
