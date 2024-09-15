#include <stdio.h>
#include "ft_toupper.c"

void test_ft_toupper()
{
    // Test lowercase letters
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (ft_toupper(i) != i - 32)
        {
            printf("Test failed for input %c\n", i);
        }
        else
        {
            printf("Test passed for input %c\n", i);
        }
    }

    // Test uppercase letters (should remain unchanged)
    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (ft_toupper(i) != i)
        {
            printf("Test failed for input %c\n", i);
        }
        else
        {
            printf("Test passed for input %c\n", i);
        }
    }

    // Test non-alphabetic characters (should remain unchanged)
    int non_alpha[] = { '1', '!', ' ', '\n', '0', '@', '[', '`', '{', '~' };
    for (int i = 0; i < sizeof(non_alpha) / sizeof(non_alpha[0]); i++)
    {
        if (ft_toupper(non_alpha[i]) != non_alpha[i])
        {
            printf("Test failed for input %c\n", non_alpha[i]);
        }
        else
        {
            printf("Test passed for input %c\n", non_alpha[i]);
        }
    }
}

int main()
{
    test_ft_toupper();
    return 0;
}