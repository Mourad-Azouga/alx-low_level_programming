#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>


/**
 * print_strings - Prints strings
 * @separator: The string between strings.
 * @n: Number of arguments
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list lst;
unsigned int i;
char *z;
if (n > 0)
{
va_start(lst, n);
for (i = 0; i < n; i++)
{
z = va_arg(lst, char*);
if (separator != NULL && i > 0)
printf("%s", separator);
if (z == NULL)
printf("(nil)");
else
printf("%s", z);
}
printf("\n");
va_end(lst);
}
}
