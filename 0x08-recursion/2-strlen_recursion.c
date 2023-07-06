#include "main.h"
/**
 * _strlen_recursion - Returs strlen
 * @s:  String to be calculated.
 * Return: length.
 */


int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
