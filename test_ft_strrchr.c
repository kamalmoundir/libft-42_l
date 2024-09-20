#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strrchr(const char *s, int c, const char *expected) {
    char *result = strrchr(s, c);
    if (result == expected) {
        printf("Test passed for input \"%s\" and character '%c'\n", s, c);
    } else {
        printf("Test failed for input \"%s\" and character '%c'. Expected \"%s\", got \"%s\"\n", s, c, expected, result);
    }
}

int main() {
    // Test cases
    test_ft_strrchr("hello world", 'o', strrchr("hello world", 'o'));
    test_ft_strrchr("hello world", 'l', strrchr("hello world", 'l'));
    test_ft_strrchr("hello world", 'z', strrchr("hello world", 'z'));
    test_ft_strrchr("hello world", '\0', strrchr("hello world", '\0'));
    test_ft_strrchr("", 'a', strrchr("", 'a'));

    return 0;
}