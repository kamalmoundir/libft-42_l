#include <stdio.h>
#include "ft_isascii.c"

void test_ft_isascii(int c, int expected) {
    int result = ft_isascii(c);
    if (result == expected) {
        printf("Test passed for input %d\n", c);
    } else {
        printf("Test failed for input %d: expected %d, got %d\n", c, expected, result);
    }
}

int main() {
    // Test cases
    test_ft_isascii(0, 1);       // Lower boundary of ASCII
    test_ft_isascii(127, 1);     // Upper boundary of ASCII
    test_ft_isascii(65, 1);      // 'A' character
    test_ft_isascii(97, 1);      // 'a' character
    test_ft_isascii(-1, 0);      // Below ASCII range
    test_ft_isascii(128, 0);     // Above ASCII range
    test_ft_isascii(255, 0);     // Well above ASCII range

    return 0;
}