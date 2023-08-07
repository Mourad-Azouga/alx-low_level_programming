#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - Reads text file and prints it.
 * @filename: The file name
 * @letters: The number of letters
 * Return: Number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char *buffer;
ssize_t read_chars = 0;

	if (filename == NULL)
	return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	fclose(fp);
	return (0);
}

	read_chars = fread(buffer, sizeof(char), letters, fp);
	if (read_chars == -1)
{
	fclose(fp);
	free(buffer);
	return (0);
}

fwrite(buffer, sizeof(char), read_chars, stdout);

fclose(fp);
free(buffer);

return (read_chars);
}
