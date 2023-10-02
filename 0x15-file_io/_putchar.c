#include "main.h"
/**
 * _putchar - prints character to stdout
 * @c: character to be printed
 * Return: character ammoung
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
