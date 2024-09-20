#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memcpy()
{
    char src[50] = "This is a test string.";
    char dest[50];
    char *result;

    // Test 1: Normal case
    result = ft_memcpy(dest, src, strlen(src) + 1);
    if (strcmp(dest, src) == 0)
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test 2: src and dest are NULL
    result = ft_memcpy(NULL, NULL, 5);
    if (result == NULL)
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    // Test 3: n is 0
    result = memcpy(dest, src, 0);
    if (result == dest)
        printf("Test 3 Passed\n");
    else
        printf("Test 3 Failed\n");

    // Test 4: Overlapping memory regions
    char overlap[50] = "Overlap test string.";
    result = memcpy(overlap + 5, overlap, strlen(overlap) + 1);
    if (strcmp(overlap + 5, "Overlap test string.") == 0)
        printf("Test 4 Passed\n");
    else
        printf("Test 4 Failed\n");
}

int main()
{
    test_ft_memcpy();
    return 0;
}
