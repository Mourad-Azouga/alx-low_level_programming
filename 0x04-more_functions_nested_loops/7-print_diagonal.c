#include "main.h"
/**
 * print_diagonal - prints diagonal line of n length
 * @n: length
 * Return: 0
 */
void print_diagonal(int n)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 0; j <= (i - 1); j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
