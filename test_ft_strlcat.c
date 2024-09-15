#include "libft.h"
#include <stdio.h>
#include <string.h>
#include<bsd/string.h>

void test_ft_strlcat()
{
    char dest[50];
    const char *src = " world";
    size_t size;
    size_t result;
    size_t expected_result;
    char expected_dest[50];

    // Test 1
    strcpy(dest, "Hello");
    size = 50;
    result = ft_strlcat(dest, src, size);
    strcpy(expected_dest, "Hello");
    expected_result = strlcat(expected_dest, src, size);
    printf("Expected: %zu, Actual: %zu, Dest: %s\n", expected_result, result, expected_dest);
    printf("Test 1 - Expected: 11, Actual: %zu, Dest: %s\n", result, dest);

    // Test 2
    strcpy(dest, "Hello");
    size = 10;
    result = ft_strlcat(dest, src, size);
    strcpy(expected_dest, "Hello");
    expected_result = strlcat(expected_dest, src, size);
    printf("Expected: %zu, Actual: %zu, Dest: %s\n", expected_result, result, expected_dest);
    printf("Test 2 - Expected: 11, Actual: %zu, Dest: %s\n", result, dest);

    // Test 3
    strcpy(dest, "Hello");
    size = 5;
    result = ft_strlcat(dest, src, size);
    strcpy(expected_dest, "Hello");
    expected_result = strlcat(expected_dest, src, size);
    printf("Expected: %zu, Actual: %zu, Dest: %s\n", expected_result, result, expected_dest);
    printf("Test 3 - Expected: 11, Actual: %zu, Dest: %s\n", result, dest);

    // Test 4
    strcpy(dest, "");
    size = 50;
    result = ft_strlcat(dest, src, size);
    strcpy(expected_dest, "");
    expected_result = strlcat(expected_dest, src, size);
    printf("Expected: %zu, Actual: %zu, Dest: %s\n", expected_result, result, expected_dest);
    printf("Test 4 - Expected: 6, Actual: %zu, Dest: %s\n", result, dest);

    // Test 5
    strcpy(dest, "Hello");
    size = 0;
    result = ft_strlcat(dest, src, size);
    strcpy(expected_dest, "Hello");
    expected_result = strlcat(expected_dest, src, size);
    printf("Expected: %zu, Actual: %zu, Dest: %s\n", expected_result, result, expected_dest);
    printf("Test 5 - Expected: 11, Actual: %zu, Dest: %s\n", result, dest);
}

int main()
{
    test_ft_strlcat();
    return 0;
}