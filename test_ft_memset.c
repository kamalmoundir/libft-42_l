#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memset()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    char str3[50] = "Hello, World!";
    char str4[50] = "Hello, World!";
    
    // Test 1: Basic test
    ft_memset(str1, 'A', 5);
    if (strcmp(str1, "AAAAA, World!") == 0)
        printf("Test 1 passed\n");
    else
        printf("Test 1 failed: %s\n", str1);

    // Test 2: Full string test
    ft_memset(str2, 'B', 13);
    if (strcmp(str2, "BBBBBBBBBBBBB") == 0)
        printf("Test 2 passed\n");
    else
        printf("Test 2 failed: %s\n", str2);

    // Test 3: Zero length test
    ft_memset(str3, 'C', 0);
    if (strcmp(str3, "Hello, World!") == 0)
        printf("Test 3 passed\n");
    else
        printf("Test 3 failed: %s\n", str3);

    // Test 4: Partial string test
    ft_memset(str4, 'D', 7);
    if (strcmp(str4, "DDDDDDDWorld!") == 0)
        printf("Test 4 passed\n");
    else
        printf("Test 4 failed: %s\n", str4);
}

int main()
{
    test_ft_memset();
    return 0;
}