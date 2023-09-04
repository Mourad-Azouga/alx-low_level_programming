#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: The filename.
 * @letters: The number of letters to be read and printed.
 * Return: The actual number of letters read and printed, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fp;
    ssize_t bytes_read, bytes_written;
    char buffer[1024 * 8];

    if (filename == NULL)
        return (-1);

    fp = fopen(filename, "r");
    if (fp == NULL)
        return (-1);

    bytes_read = fread(buffer, 1, letters, fp);
    if (bytes_read == 0)
    {
        fclose(fp);
        return (0); 
    }
    else if (bytes_read == -1)
    {
        fclose(fp);
        return (-1); 
    }

    bytes_written = fwrite(buffer, 1, bytes_read, stdout);

    fclose(fp);
    return (bytes_written);
}

