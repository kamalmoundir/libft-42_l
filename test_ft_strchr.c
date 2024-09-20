#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

void test_ft_strchr(const char *s, int c, const char *expected) {
    char *result = ft_strchr(s, c);
    if (result == expected) {
        printf("Test passed for input \"%s\" and character '%c'\n", s, c);
    } else {
        printf("Test failed for input \"%s\" and character '%c'\n", s, c);
        printf("Expected: \"%s\", but got: \"%s\"\n", expected, result);
    }
}

int main() {
    // Test cases
    test_ft_strchr("hello", 'e', "ello");
    test_ft_strchr("hello", 'l', "llo");
    test_ft_strchr("hello", 'o', "o");
    test_ft_strchr("hello", 'x', NULL);
    test_ft_strchr("hello", '\0', "");

    return 0;
}