#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: NULL return 0
 * @letters: letters printed
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t total_read = 0;
ssize_t bytes_read = 0;
char *buffer = NULL;
int fd;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));

if (buffer == NULL)
close(fd);
return (0);

while ((bytes_read = read(fd, buffer, letters)) > 0)
buffer[bytes_read] = '\0';
write(STDOUT_FILENO, buffer, bytes_read);
total_read += bytes_read;

free(buffer);
close(fd);

if (bytes_read == -1)
return (0);

return (total_read);
}
