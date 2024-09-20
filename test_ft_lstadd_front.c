#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a new list node
t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// Function to print the list (for debugging purposes)
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    // Create initial list
    t_list *head = ft_lstnew("second");
    t_list *new_node = ft_lstnew("first");

    // Add new node to the front
    ft_lstadd_front(&head, new_node);

    // Print the list to check if the new node is added correctly
    print_list(head);

    // Check if the new node is the head
    if (head == new_node && head->content == new_node->content)
    {
        printf("Test passed: new node is added to the front.\n");
    }
    else
    {
        printf("Test failed: new node is not added to the front.\n");
    }

    // Free allocated memory
    free(new_node);
    free(head);

    return 0;
}