#include <stdio.h>
#include "libft.h"

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

void test_ft_lstadd_back(const char *test_name, t_list **lst, t_list *new, const char *expected)
{
    ft_lstadd_back(lst, new);
    printf("[%s] List after adding back: ", test_name);
    print_list(*lst);
    printf("Expected: %s\n", expected);
}

int main(void)
{
    // Test case 1: Adding to an empty list
    t_list *lst1 = NULL;
    t_list *new1 = ft_lstnew((void *)"new1");
    test_ft_lstadd_back("Test 1", &lst1, new1, "new1 -> NULL");

    // Test case 2: Adding to a non-empty list
    t_list *lst2 = ft_lstnew((void *)"node1");
    t_list *new2 = ft_lstnew((void *)"new2");
    test_ft_lstadd_back("Test 2", &lst2, new2, "node1 -> new2 -> NULL");

    // Test case 3: Adding multiple nodes
    t_list *lst3 = ft_lstnew((void *)"node1");
    t_list *new3_1 = ft_lstnew((void *)"new3_1");
    t_list *new3_2 = ft_lstnew((void *)"new3_2");
    test_ft_lstadd_back("Test 3.1", &lst3, new3_1, "node1 -> new3_1 -> NULL");
    test_ft_lstadd_back("Test 3.2", &lst3, new3_2, "node1 -> new3_1 -> new3_2 -> NULL");

    // Free the allocated memory
    while (lst1)
    {
        t_list *temp = lst1;
        lst1 = lst1->next;
        free(temp);
    }
    while (lst2)
    {
        t_list *temp = lst2;
        lst2 = lst2->next;
        free(temp);
    }
    while (lst3)
    {
        t_list *temp = lst3;
        lst3 = lst3->next;
        free(temp);
    }

    return 0;
}