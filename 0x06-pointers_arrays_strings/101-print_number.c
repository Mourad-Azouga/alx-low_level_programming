#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * return: void
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
print_number(n1 / 10);
_putchar('0' + (n1 % 10));
}
