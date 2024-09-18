#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_bzero(void *s, size_t n, const char *expected)
{
    ft_bzero(s, n);
    if (memcmp(s, expected, n) == 0)
    {
        printf("Test passed\n");
    }
    else
    {
        printf("Test failed\n");
    }
}

int main()
{
    char test1[10] = "abcdefghi";
    char expected1[10] = "\0\0\0\0\0\0\0\0\0\0";
    test_ft_bzero(test1, 10, expected1);

    char test2[10] = "abcdefghi";
    char expected2[10] = "\0\0\0\0\0fghi";
    test_ft_bzero(test2, 5, expected2);

    char test3[10] = "abcdefghi";
    char expected3[10] = "abcdefghi";
    test_ft_bzero(test3, 0, expected3);

    return 0;
}