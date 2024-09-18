#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_itoa(int n, const char *expected) {
    char *result = ft_itoa(n);
    if (strcmp(result, expected) == 0) {
        printf("Test passed for input %d: %s\n", n, result);
    } else {
        printf("Test failed for input %d: expected %s, got %s\n", n, expected, result);
    }
    free(result);
}

int main() {
    test_ft_itoa(0, "0");
    test_ft_itoa(123, "123");
    test_ft_itoa(-123, "-123");
    test_ft_itoa(2147483647, "2147483647");
    test_ft_itoa(-2147483648, "-2147483648");

    return 0;
}