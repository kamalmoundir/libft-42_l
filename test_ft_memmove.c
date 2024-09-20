#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memmove()
{
    char src1[50] = "This is a test string.";
    char dest1[50];
    char src2[50] = "This is a test string.";
    char dest2[50];

    // Test 1: Basic test
    ft_memmove(dest1, src1, strlen(src1) + 1);
    memmove(dest2, src2, strlen(src2) + 1);
    if (strcmp(dest1, dest2) == 0)
        printf("Test 1 passed.\n");
    else
        printf("Test 1 failed.\n");

    // Test 2: Overlapping regions (src < dest)
    char overlap_src1[50] = "1234567890";
    ft_memmove(overlap_src1 + 4, overlap_src1, 6);
    char overlap_src2[50] = "1234567890";
    memmove(overlap_src2 + 4, overlap_src2, 6);
    if (strcmp(overlap_src1, overlap_src2) == 0)
        printf("Test 2 passed.\n");
    else
        printf("Test 2 failed.\n");

    // Test 3: Overlapping regions (dest < src)
    char overlap_src3[50] = "1234567890";
    ft_memmove(overlap_src3, overlap_src3 + 4, 6);
    char overlap_src4[50] = "1234567890";
    memmove(overlap_src4, overlap_src4 + 4, 6);
    if (strcmp(overlap_src3, overlap_src4) == 0)
        printf("Test 3 passed.\n");
    else
        printf("Test 3 failed.\n");

    // Test 4: Zero length
    char src3[50] = "Another test string.";
    char dest3[50] = "Destination string.";
    ft_memmove(dest3, src3, 0);
    if (strcmp(dest3, "Destination string.") == 0)
        printf("Test 4 passed.\n");
    else
        printf("Test 4 failed.\n");
}

int main()
{
    test_ft_memmove();
    return 0;
}

