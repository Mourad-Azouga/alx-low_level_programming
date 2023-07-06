#include "main.h"
/**
 * factorial - Calculates factorial.
 * @n:  Number to be factorialised.
 * Return: Factorial of a given number.
 */


int factorial(int n)
{
if (n < 0)
return (-1);
else
if (n == 0)
return (1);
else
	return (n * factorial(n - 1));
}
