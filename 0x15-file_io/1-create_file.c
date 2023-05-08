#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: NULL create an empty file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, ret;
mode_t mode = S_IRUSR | S_IWUSR;
ssize_t len = 0;

if (filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd == -1)
return (-1);

if (text_content)
while (text_content[len])
len++;

ret = write(fd, text_content, len);
if (ret == -1)
close(fd);
return (-1);

close(fd);
return (1);
}
