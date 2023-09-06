#include "main.h"
#include <unistd.h>
/*
 * main - main program
 * @argc: argument number
 * @argv: argument holder
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fr_from, fr_to, r, w;
	char buff[1024];
	if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
fr_from = open(argv[1], O_RDONLY);
if (fr_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fr_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
if (fr_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
while ((r = read(fr_from, buff, 1024)) > 0)
	{
		w = write(fr_to, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fr_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fr_from);
		exit(100);
	}
	if (close(fr_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fr_to);
		exit(100);
	}
return (0);
}
