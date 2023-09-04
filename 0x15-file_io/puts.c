#include "main.h"

/*
 * _putc - uses putchar to print string
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
