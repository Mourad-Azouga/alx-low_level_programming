#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point of the program
 * @n: the input
 * Description: This script counts from n to 98.
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
