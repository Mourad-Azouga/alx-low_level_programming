#include "main.h"
/**
 * _strlen - calculates string length
 * @str: the string
 * Return: length of string
 */
ssize_t _strlen(const char*)
{
        ssize_t len = 0;

        while (str != '\0' && str)
        {
                str++;
                len++;
        }
        return (len);
}
/**
 * append_text_to_file - appens text at the end of a file
 * @filename:  is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 success -1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
