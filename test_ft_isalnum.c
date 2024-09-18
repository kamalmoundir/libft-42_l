#include <stdio.h>
#include "ft_isalnum.c"

void test_ft_isalnum(int c, int expected) {
    int result = ft_isalnum(c);
    if (result == expected) {
        printf("Test passed for input %c\n", c);
    } else {
        printf("Test failed for input %c: expected %d, got %d\n", c, expected, result);
    }
}

int main() {
    // Test with alphabetic characters
    test_ft_isalnum('a', 1);
    test_ft_isalnum('z', 1);
    test_ft_isalnum('A', 1);
    test_ft_isalnum('Z', 1);

    // Test with numeric characters
    test_ft_isalnum('0', 1);
    test_ft_isalnum('9', 1);

    // Test with non-alphanumeric characters
    test_ft_isalnum('!', 0);
    test_ft_isalnum('@', 0);
    test_ft_isalnum(' ', 0);
    test_ft_isalnum('\n', 0);

    return 0;
}