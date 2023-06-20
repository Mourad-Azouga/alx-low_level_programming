#include "main.h"

/**
 * print_sign - Prints the character sign
 * @c: The character to be checked.
 * Description: This function tests if the character
 *              is negative positive of equals 0 and
 *              returns and prints the result
 * Return: 1 if true 0 if false
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
