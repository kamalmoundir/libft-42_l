#include <stdio.h>
#include "libft.h"

void test_ft_tolower()
{
    // Test with uppercase letters
    for (int c = 'A'; c <= 'Z'; c++)
    {
        if (ft_tolower(c) != c + 32)
        {
            printf("Test failed for input %c\n", c);
            return;
        }
    }

    // Test with lowercase letters
    for (int c = 'a'; c <= 'z'; c++)
    {
        if (ft_tolower(c) != c)
        {
            printf("Test failed for input %c\n", c);
            return;
        }
    }

    // Test with non-alphabetic characters
    for (int c = 0; c < 256; c++)
    {
        if ((c < 'A' || c > 'Z') && ft_tolower(c) != c)
        {
            printf("Test failed for input %c\n", c);
            return;
        }
    }

    printf("All tests passed!\n");
}

int main()
{
    test_ft_tolower();
    return 0;
}