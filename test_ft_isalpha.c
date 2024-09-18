#include "libft.h"
#include <stdio.h>
void test_ft_isalpha(char c, int expected) {
    int result = ft_isalpha(c);
    if (result == expected) {
        printf("Test passed for input '%c'\n", c);
    } else {
        printf("Test failed for input '%c': expected %d, got %d\n", c, expected, result);
    }
}

int main() {
    // Test cases for lowercase letters
    test_ft_isalpha('a', 1);
    test_ft_isalpha('z', 1);
    test_ft_isalpha('m', 1);

    // Test cases for uppercase letters
    test_ft_isalpha('A', 1);
    test_ft_isalpha('Z', 1);
    test_ft_isalpha('M', 1);

    // Test cases for non-alphabetic characters
    test_ft_isalpha('1', 0);
    test_ft_isalpha('!', 0);
    test_ft_isalpha(' ', 0);
    test_ft_isalpha('\n', 0);

    return 0;
}