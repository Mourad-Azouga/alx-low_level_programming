#include "main.h"
/**
 * _strlen - calculates string length
 * @str: the string
 * Return: length of string
 */
ssize_t _strlen(const char *str)
{
        ssize_t len = 0;

        while (*str != '\0' && *str)
        {
                str++;
                len++;
        }
        return (len);
}
/**
 * create_file - creates a file
 * @filename:is the name of the file to create
 * @text_content:is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
