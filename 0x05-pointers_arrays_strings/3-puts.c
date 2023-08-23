#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	_putchar('\n');
}

