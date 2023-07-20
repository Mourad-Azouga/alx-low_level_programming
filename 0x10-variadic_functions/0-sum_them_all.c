#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the args
 * @n: Number of arguments
 * Return: The sum of the arguments or 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list lst;
unsigned int i, z, sum = 0;
if (n == 0)
return (0);
va_start(lst, n);
for (i = 0; i < n; i++)
{
z = va_arg(lst, int);
sum += z;
}
va_end(lst);
return (sum);
}
