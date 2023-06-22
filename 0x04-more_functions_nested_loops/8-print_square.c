#include "main.h"
/**
 * print_square - prints 10 times 0-14
 * @n: size
 */
void print_square(int n)
{
	int i;
	int h;
if (n !=0)
{
	for (h = 0; h < n; h++)
	{
		for (i = 0; i < n; i++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
else
_putchar('\n');
}
