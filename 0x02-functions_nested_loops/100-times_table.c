#include "main.h"

/**
 * print_times_table - prints the times table up to a given number
 * @n: integer to determine the size of the table
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = j * i;

				if (j == 0)
					_putchar('0');
				else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
			}
			_putchar('\n');
		}
	}
}

