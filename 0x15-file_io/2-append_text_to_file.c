#include "main.h"
#include <unistd.h>
/**
 * _strlen - length of str
 * @b: The str
 * Return: len
 */
int _strlen(char *b)
{
int i = 0;
if (!b)
return (0);

while (*b++)
i++;

return (i);
}



/**
 * append_text_to_file - Adds text to existing file
 * @filename: The file name
 * @text_content: Text cnt
 * Return: 1 if success and -1 if faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes = 0, len = _strlen(text_content);
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (len)
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
