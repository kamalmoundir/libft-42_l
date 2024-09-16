#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2);

void test_ft_strjoin(char const *s1, char const *s2, char const *expected) {
    char *result = ft_strjoin(s1, s2);
    if (strcmp(result, expected) == 0) {
        printf("Test passed: \"%s\" + \"%s\" = \"%s\"\n", s1, s2, result);
    } else {
        printf("Test failed: \"%s\" + \"%s\" = \"%s\" (expected \"%s\")\n", s1, s2, result, expected);
    }
    free(result);
}

int main() {
    test_ft_strjoin("Hello, ", "world!", "Hello, world!");
    test_ft_strjoin("", "world!", "world!");
    test_ft_strjoin("Hello, ", "", "Hello, ");
    test_ft_strjoin("", "", "");

    return 0;
}