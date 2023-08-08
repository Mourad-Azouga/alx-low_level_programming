#include "main.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	int fr_from, fr_to, _write, _read;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr_from = open(av[1], O_RDONLY);
	if (fr_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fr_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fr_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((_read = read(fr_from, buff, 1024)) > 0)
	{
		_write = write(fr_to, buff, _read);
		if (_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
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
