#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    // Test 1: Basic positive number
    printf("Test 1: %d\n", ft_atoi("123") == 123);

    // Test 2: Basic negative number
    printf("Test 2: %d\n", ft_atoi("-123") == -123);

    // Test 3: Number with leading spaces
    printf("Test 3: %d\n", ft_atoi("   456") == 456);

    // Test 4: Number with leading tabs and spaces
    printf("Test 4: %d\n", ft_atoi("\t\n  789") == 789);

    // Test 5: Number with leading plus sign
    printf("Test 5: %d\n", ft_atoi("+42") == 42);

    // Test 6: Number with multiple signs
    printf("Test 6: %d\n", ft_atoi("+-42") == 0);

    // Test 7: Number with non-digit characters at the end
    printf("Test 7: %d\n", ft_atoi("123abc") == 123);

    // Test 8: Empty string
    printf("Test 8: %d\n", ft_atoi("") == 0);

    // Test 9: String with only spaces
    printf("Test 9: %d\n", ft_atoi("    ") == 0);

    // Test 10: String with only non-digit characters
    printf("Test 10: %d\n", ft_atoi("abc") == 0);

    return 0;
}