#include "main.h"
#include <string.h>
/*
 * _putchar - prints a single character
 *  @c: character to be printed
 *  Return: number of character written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
