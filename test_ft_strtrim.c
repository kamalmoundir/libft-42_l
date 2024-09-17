#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

void test_ft_strtrim(char const *s1, char const *set, char const *expected)
{
    char *result = ft_strtrim(s1, set);
    if (strcmp(result, expected) == 0)
    {
        printf("Test passed for input \"%s\" with set \"%s\"\n", s1, set);
    }
    else
    {
        printf("Test failed for input \"%s\" with set \"%s\"\n", s1, set);
        printf("Expected: \"%s\", but got: \"%s\"\n", expected, result);
    }
    free(result);
}

int main()
{
    test_ft_strtrim("   ktestk   k", "ktse ", "");
    test_ft_strtrim("   hello world   ", " ", "hello world");
    test_ft_strtrim("xxxyhelloxxx", "x", "yhello");
    test_ft_strtrim("abcabcabc", "abc", "");
    test_ft_strtrim("", "abc", "");
    test_ft_strtrim("no trimming needed", "xyz", "no trimming needed");

    return 0;
}