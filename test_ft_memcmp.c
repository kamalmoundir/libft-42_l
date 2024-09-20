#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memcmp(const void *s1, const void *s2, size_t n, int expected) {
    int result = ft_memcmp(s1, s2, n);
    if (result == expected) {
        printf("Test passed for inputs (%s, %s, %zu)\n", (char *)s1, (char *)s2, n);
    } else {
        printf("Test failed for inputs (%s, %s, %zu). Expected %d but got %d\n", (char *)s1, (char *)s2, n, expected, result);
    }
}

int main() {
    // Test cases
    test_ft_memcmp("abcdef", "abcdef", 6, 0);
    test_ft_memcmp("abcdef", "abcdeg", 6, 'f' - 'g');
    test_ft_memcmp("abcdef", "abcdee", 6, 'f' - 'e');
    test_ft_memcmp("abcdef", "abcdee", 5, 0);
    test_ft_memcmp("abcdef", "abcdefg", 7, 0);
    test_ft_memcmp("abcdef", "abcdff", 6, 'e' - 'f');
    test_ft_memcmp("abcdef", "abcdff", 4, 0);
    test_ft_memcmp("", "", 0, 0);
    test_ft_memcmp("a", "b", 1, 'a' - 'b');
    test_ft_memcmp("a", "a", 1, 0);

    return 0;
}