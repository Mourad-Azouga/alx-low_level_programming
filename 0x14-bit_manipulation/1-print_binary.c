#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int str;

	for (i = 63; i >= 0; i--)
	{
		str = n >> i;

		if (str & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
