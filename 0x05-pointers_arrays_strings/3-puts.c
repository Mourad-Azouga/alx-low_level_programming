#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: void
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}

	_putchar('\n');
}

