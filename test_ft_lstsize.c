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

void test_ft_lstsize()
{
    t_list *head = NULL;
    t_list *node1 = create_node("Node 1");
    t_list *node2 = create_node("Node 2");
    t_list *node3 = create_node("Node 3");

    // Test with an empty list
    printf("Test 1 - Empty list: %d\n", ft_lstsize(head)); // Expected output: 0

    // Test with a list of one node
    head = node1;
    printf("Test 2 - One node: %d\n", ft_lstsize(head)); // Expected output: 1

    // Test with a list of two nodes
    node1->next = node2;
    printf("Test 3 - Two nodes: %d\n", ft_lstsize(head)); // Expected output: 2

    // Test with a list of three nodes
    node2->next = node3;
    printf("Test 4 - Three nodes: %d\n", ft_lstsize(head)); // Expected output: 3

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
}

int main()
{
    test_ft_lstsize();
    return 0;
}