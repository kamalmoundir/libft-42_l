#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// Assuming ft_putstr_fd is defined in libft.h
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
int main(void)
{
    int fd;
    char *filename = "test_output.txt";
    char *test_str = "Hello, 42!";
    char buffer[50];
    ssize_t bytes_read;

    // Open file for writing
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file for writing");
        return 1;
    }

    // Write test string to file
    ft_putstr_fd(test_str, fd);

    // Close the file
    close(fd);

    // Open file for reading
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file for reading");
        return 1;
    }

    // Read content from file
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1)
    {
        perror("Error reading file");
        close(fd);
        return 1;
    }

    // Null-terminate the buffer
    buffer[bytes_read] = '\0';

    // Close the file
    close(fd);

    // Compare the content
    if (strcmp(buffer, test_str) == 0)
    {
        printf("Test passed: Output matches expected string.\n");
    }
    else
    {
        printf("Test failed: Output does not match expected string.\n");
    }

    // Clean up
    //remove(filename);

    return 0;
}

