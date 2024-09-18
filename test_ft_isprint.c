#include <stdio.h>
#include "ft_isprint.c"

void test_ft_isprint(int c, int expected) {
    int result = ft_isprint(c);
    if (result == expected) {
        printf("Test passed for input %d\n", c);
    } else {
        printf("Test failed for input %d: expected %d, got %d\n", c, expected, result);
    }
}

int main() {
    // Test cases for ft_isprint
    test_ft_isprint(31, 0);  // Non-printable character
    test_ft_isprint(32, 1);  // Space (printable)
    test_ft_isprint(48, 1);  // '0' (printable)
    test_ft_isprint(65, 1);  // 'A' (printable)
    test_ft_isprint(90, 1);  // 'Z' (printable)
    test_ft_isprint(97, 1);  // 'a' (printable)
    test_ft_isprint(122, 1); // 'z' (printable)
    test_ft_isprint(126, 1); // '~' (printable)
    test_ft_isprint(127, 0); // DEL (non-printable)
    test_ft_isprint(128, 0); // Non-ASCII character (non-printable)

    return 0;
}