#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates a file
 * @filename: The file name
 * @text_content: Text cnt
 * Return: 1 if success and -1 if faillure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes = 0, len = _strlen(text_content);
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (len)
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}

