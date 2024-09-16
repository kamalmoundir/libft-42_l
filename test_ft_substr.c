#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_substr(char const *s, unsigned int start, size_t len, const char *expected)
{
    char *result = ft_substr(s, start, len);
    if (strcmp(result, expected) == 0)
        printf("Test passed for input \"%s\", start %u, len %zu\n", s, start, len);
    else
        printf("Test failed for input \"%s\", start %u, len %zu. Expected \"%s\", got \"%s\"\n", s, start, len, expected, result);
    free(result);
}

int main()
{
    test_ft_substr("test test", 2, 8, "st test");
    test_ft_substr("hello world", 6, 5, "world");
    test_ft_substr("42", 0, 2, "42");
    test_ft_substr("42", 1, 1, "2");
    test_ft_substr("42", 2, 2, "");
    test_ft_substr("", 0, 1, "");
    test_ft_substr("boundary", 8, 1, "");

    return 0;
}