#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void print_split_result(char **result) {
    int i = 0;
    while (result[i]) {
        printf("result[%d]: %s\n", i, result[i]);
        i++;
    }
}

void free_split_result(char **result) {
    int i = 0;
    while (result[i]) {
        free(result[i]);
        i++;
    }
    free(result);
}

void test_ft_split(char const *s, char c) {
    printf("Testing ft_split with input string: \"%s\" and delimiter: '%c'\n", s, c);
    char **result = ft_split(s, c);
    if (result) {
        print_split_result(result);
        free_split_result(result);
    } else {
        printf("ft_split returned NULL\n");
    }
    printf("\n");
}

int main() {
    test_ft_split("hello world this is a test", ' ');
    test_ft_split("42  school  of  coding", ' ');
    test_ft_split(",,,hello,,,world,,,", ',');
    test_ft_split("no_delimiters_here", ',');
    test_ft_split("", ' ');
    test_ft_split("   leading and trailing spaces   ", ' ');

    return 0;
}