#include "shell.c"
/* This programs is for writing funcs, made by Mourad */

/*
 * _putchar - Prints character
 * @: character to be printed
 * Return: num char printed success -1 failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/*
 * _puts - prints string followde by new line
 * @str: string to be printed
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