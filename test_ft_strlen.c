#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlen(const char *str, size_t expected) {
    size_t result = ft_strlen(str);
    if (result == expected) {
        printf("Test passed for input \"%s\"\n", str);
    } else {
        printf("Test failed for input \"%s\": expected %zu, got %zu\n", str, expected, result);
    }
}

int main() {
    test_ft_strlen("", 0);
    test_ft_strlen("Hello", 5);
    test_ft_strlen("42", 2);
    test_ft_strlen("This is a longer string.", 24);
    test_ft_strlen("Another\0hidden", 7);

    return 0;
}