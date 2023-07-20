#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>


/**
 * print_numbers - Prints numbers
 * @separator: The string between numbers.
 * @n: Number of arguments
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list lst;
unsigned int i, z;
if (n > 0)
{
va_start(lst, n);
for (i = 0; i < n; i++)
{
z = va_arg(lst, int);
printf("%d", z);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(lst);
}
}
