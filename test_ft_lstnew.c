#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void test_ft_lstnew_null_content() {
    t_list *node = ft_lstnew(NULL);
    if (node == NULL) {
        printf("test_ft_lstnew_null_content: Failed to allocate memory\n");
    } else if (node->content == NULL && node->next == NULL) {
        printf("test_ft_lstnew_null_content: Passed\n");
    } else {
        printf("test_ft_lstnew_null_content: Failed\n");
    }
    free(node);
}

void test_ft_lstnew_non_null_content() {
    int content = 42;
    t_list *node = ft_lstnew(&content);
    if (node == NULL) {
        printf("test_ft_lstnew_non_null_content: Failed to allocate memory\n");
    } else if (*(int *)(node->content) == 42 && node->next == NULL) {
        printf("test_ft_lstnew_non_null_content: Passed\n");
    } else {
        printf("test_ft_lstnew_non_null_content: Failed\n");
    }
    free(node);
}

void test_ft_lstnew_memory_allocation_failure() {
    // Simulate memory allocation failure by setting malloc to NULL
    // This is platform dependent and may require specific tools or settings
    // For demonstration purposes, we assume malloc fails and returns NULL
    // This test might not be executable in a normal environment
    // You can use tools like Valgrind or custom malloc wrappers to simulate this

    // Assuming a custom malloc wrapper or tool is used to simulate failure
    // t_list *node = ft_lstnew(some_content);
    // if (node == NULL) {
    //     printf("test_ft_lstnew_memory_allocation_failure: Passed\n");
    // } else {
    //     printf("test_ft_lstnew_memory_allocation_failure: Failed\n");
    // }
}

int main() {
    test_ft_lstnew_null_content();
    test_ft_lstnew_non_null_content();
    // Uncomment the following line if you have a way to simulate malloc failure
    // test_ft_lstnew_memory_allocation_failure();
    return 0;
}