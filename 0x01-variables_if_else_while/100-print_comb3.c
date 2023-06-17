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
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
if (i == j)
continue;
else
{
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
