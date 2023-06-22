#include "main.h"
/**
 * _isdigit - checks if the character is a digit
 * @c: - the character to be checked
 * Return: if digit 1 else 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
