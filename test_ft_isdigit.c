#include <stdio.h>
#include "ft_isdigit.c" // Include the implementation file

void test_ft_isdigit(int c, int expected) {
    int result = ft_isdigit(c);
    if (result == expected) {
        printf("Test passed for input %d\n", c);
    } else {
        printf("Test failed for input %d: expected %d, got %d\n", c, expected, result);
    }
}

int main() {
    // Test cases for digits
    test_ft_isdigit('0', 1);
    test_ft_isdigit('1', 1);
    test_ft_isdigit('2', 1);
    test_ft_isdigit('3', 1);
    test_ft_isdigit('4', 1);
    test_ft_isdigit('5', 1);
    test_ft_isdigit('6', 1);
    test_ft_isdigit('7', 1);
    test_ft_isdigit('8', 1);
    test_ft_isdigit('9', 1);

    // Test cases for non-digits
    test_ft_isdigit('a', 0);
    test_ft_isdigit('Z', 0);
    test_ft_isdigit(' ', 0);
    test_ft_isdigit('@', 0);
    test_ft_isdigit('!', 0);
    test_ft_isdigit('\n', 0);

    return 0;
}