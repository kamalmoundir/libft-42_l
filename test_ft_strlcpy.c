#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcpy()
{
    char dst[20];
    const char *src = "Hello, World!";
    size_t size;
    size_t result;

    // Test 1: Normal case
    size = 20;
    result = ft_strlcpy(dst, src, size);
    printf("Test 1 - Expected: %zu, Got: %zu, dst: %s\n", strlen(src), result, dst);

    // Test 2: Size is smaller than src length
    size = 6;
    result = ft_strlcpy(dst, src, size);
    printf("Test 2 - Expected: %zu, Got: %zu, dst: %s\n", strlen(src), result, dst);

    // Test 3: Size is zero
    size = 0;
    result = ft_strlcpy(dst, src, size);
    printf("Test 3 - Expected: %zu, Got: %zu, dst: %s\n", strlen(src), result, dst);

    // Test 4: Size is exactly the length of src + 1
    size = strlen(src) + 1;
    result = ft_strlcpy(dst, src, size);
    printf("Test 4 - Expected: %zu, Got: %zu, dst: %s\n", strlen(src), result, dst);

    // Test 5: Empty src string
    src = "";
    size = 5;
    result = ft_strlcpy(dst, src, size);
    printf("Test 5 - Expected: %zu, Got: %zu, dst: %s\n", strlen(src), result, dst);
}

int main()
{
    test_ft_strlcpy();
    return 0;
}