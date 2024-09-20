#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putchar_fd(char c, int fd);

void test_ft_putchar_fd()
{
    int fd;
    char buffer[2];
    ssize_t bytes_read;

    // Create a temporary file for testing
    fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
    {
        perror("Failed to open test file");
        exit(EXIT_FAILURE);
    }

    // Test writing a character to the file
    ft_putchar_fd('A', fd);

    // Reset file offset to the beginning
    lseek(fd, 0, SEEK_SET);

    // Read the character back from the file
    bytes_read = read(fd, buffer, 1);
    if (bytes_read == -1)
    {
        perror("Failed to read from test file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    // Null-terminate the buffer for comparison
    buffer[1] = '\0';

    // Check if the character written is correct
    if (strcmp(buffer, "A") == 0)
    {
        printf("Test passed: Character 'A' was correctly written to the file.\n");
    }
    else
    {
        printf("Test failed: Expected 'A', but got '%s'.\n", buffer);
    }

    // Clean up
    close(fd);
    remove("test_output.txt");
}

int main()
{
    test_ft_putchar_fd();
    return 0;
}