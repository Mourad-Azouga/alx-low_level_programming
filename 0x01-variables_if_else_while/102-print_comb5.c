#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
if (i == j)
continue;
else
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
