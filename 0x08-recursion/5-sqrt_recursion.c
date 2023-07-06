#include "main.h"
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
if (n == 0 || n == 1)
return (n);
else
return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if it does not have a natural square root.
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
else
if (i * i > n)
return (-1);
else
return (sqrt_helper(n, i + 1));
}
