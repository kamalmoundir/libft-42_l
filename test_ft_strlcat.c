

#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcat(char *dest, const char *src, size_t size, size_t expected_len, const char *expected_dest) {
    char buffer[100];
    strcpy(buffer, dest);
    size_t result = ft_strlcat(buffer, src, size);

    if (result == expected_len && strcmp(buffer, expected_dest) == 0) {
        printf("Test passed\n");
    } else {
        printf("Test failed\n");
        printf("Expected length: %zu, Got: %zu\n", expected_len, result);
        printf("Expected dest: %s, Got: %s\n", expected_dest, buffer);
    }
}

int main() {
    // Test 1
    test_ft_strlcat("Hello", " World", 11, 11, "Hello World");

    // Test 2
    test_ft_strlcat("Hello", " World", 10, 11, "Hello Worl");

    // Test 3
    test_ft_strlcat("Hello", " World", 5, 11, "Hello");

    // Test 4
    test_ft_strlcat("", "Hello", 6, 5, "Hello");

    // Test 5
    test_ft_strlcat("Hello", "", 6, 5, "Hello");

    return 0;
}
