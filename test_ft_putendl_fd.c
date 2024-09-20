#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_putendl_fd()
{
    int fd;
    char buffer[100];
    ssize_t bytes_read;

    // Test 1: Normal string
    fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return;
    }
    ft_putendl_fd("Hello, World!", fd);
    lseek(fd, 0, SEEK_SET);
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes_read] = '\0';
    if (strcmp(buffer, "Hello, World!\n") == 0)
        printf("Test 1 passed\n");
    else
        printf("Test 1 failed\n");
    close(fd);

    // Test 2: Empty string
    fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return;
    }
    ft_putendl_fd("", fd);
    lseek(fd, 0, SEEK_SET);
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes_read] = '\0';
    if (strcmp(buffer, "\n") == 0)
        printf("Test 2 passed\n");
    else
        printf("Test 2 failed\n");
    close(fd);

    // Test 3: NULL string
    fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return;
    }
    ft_putendl_fd(NULL, fd);
    lseek(fd, 0, SEEK_SET);
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes_read] = '\0';
    if (strcmp(buffer, "") == 0)
        printf("Test 3 passed\n");
    else
        printf("Test 3 failed\n");
    close(fd);
}

int main()
{
    test_ft_putendl_fd();
    return 0;
}