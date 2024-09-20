#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strncmp(const char *s1, const char *s2, size_t n, int expected)
{
    int result = ft_strncmp(s1, s2, n);
    if (result == expected)
        printf("Test passed for ft_strncmp(\"%s\", \"%s\", %zu)\n", s1, s2, n);
    else
        printf("Test failed for ft_strncmp(\"%s\", \"%s\", %zu): expected %d, got %d\n", s1, s2, n, expected, result);
}

int main()
{
    test_ft_strncmp("hello", "hello", 5, 0);
    test_ft_strncmp("hello", "hella", 5, 'o' - 'a');
    test_ft_strncmp("hello", "hella", 4, 0);
    test_ft_strncmp("hello", "helloa", 6, 0);
    test_ft_strncmp("hello", "helloa", 7, 'o' - 'a');
    test_ft_strncmp("hello", "hell", 5, 'o' - '\0');
    test_ft_strncmp("hello", "world", 1, 'h' - 'w');
    test_ft_strncmp("", "", 1, 0);
    test_ft_strncmp("a", "b", 1, 'a' - 'b');
    test_ft_strncmp("abc", "abc", 0, 0);

    return 0;
}