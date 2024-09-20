#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Helper function to create a new list node
t_list *create_node(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// Test function for ft_lstlast
void test_ft_lstlast()
{
    // Test 1: Empty list
    t_list *empty_list = NULL;
    if (ft_lstlast(empty_list) == NULL)
        printf("Test 1 passed\n");
    else
        printf("Test 1 failed\n");

    // Test 2: Single element list
    t_list *single_node = create_node((void*)42);
    if (ft_lstlast(single_node) == single_node)
        printf("Test 2 passed\n");
    else
        printf("Test 2 failed\n");

    // Test 3: Multiple elements list
    t_list *node1 = create_node((void *)1);
    t_list *node2 = create_node((void *)2);
    t_list *node3 = create_node((void *)3);
    node1->next = node2;
    node2->next = node3;

    if (ft_lstlast(node1) == node3)
        printf("Test 3 passed\n");
    else
        printf("Test 3 failed\n");

    // Free allocated memory
    free(single_node);
    free(node1);
    free(node2);
    free(node3);
}

int main()
{
    test_ft_lstlast();
    return 0;
}