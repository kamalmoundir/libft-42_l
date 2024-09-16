#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_strdup(const char *s)
{
    char *dup = ft_strdup(s);
    if (dup == NULL)
    {
        printf("ft_strdup(\"%s\") failed: returned NULL\n", s);
    }
    else
    {
        if (strcmp(dup, s) == 0)
        {
            printf("ft_strdup(\"%s\") passed\n", s);
        }
        else
        {
            printf("ft_strdup(\"%s\") failed: expected \"%s\", got \"%s\"\n", s, s, dup);
        }
        free(dup);
    }
}

int main()
{
    test_ft_strdup("Hello, World!");
    test_ft_strdup("");
    test_ft_strdup("42");
    test_ft_strdup("This is a longer string to test the strdup function.");
    test_ft_strdup("Special characters: !@#$%^&*()_+");

    return 0;
}