#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_calloc()
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr == NULL)
    {
        printf("ft_calloc failed to allocate memory\n");
        return;
    }

    // Check if all elements are zero
    int all_zero = 1;
    for (size_t i = 0; i < nmemb; i++)
    {
        if (arr[i] != 0)
        {
            all_zero = 0;
            break;
        }
    }

    if (all_zero)
    {
        printf("Test passed: All elements are zero\n");
    }
    else
    {
        printf("Test failed: Not all elements are zero\n");
    }

    free(arr);
}

int main()
{
    test_ft_calloc();
    return 0;
}