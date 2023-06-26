#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the input string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length] != '\0')
		{
			if (length % 2 == 0)
			{
				_putchar(str[length]);
			}
			length++;
		}
		_putchar('\n');
	}
}

