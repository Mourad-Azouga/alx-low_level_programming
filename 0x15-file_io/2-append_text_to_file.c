#include "main.h"
#include <unistd.h>
/*
 * append_text_to_file - Adds the desired text to the existing file
 * @filename: file to be operating with
 * @text_content: text to be added
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t byte;
	int len = 0;

if (!filename)
	return (-1);

fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
	return (-1);
if (text_content)
{
		for (len = 0; text_content[len]; len++){}
	

byte = write(fp, text_content, len);
if (byte == -1)
{
	close(fp);
	return (-1);
}
}
close(fp);
return (1);
}
