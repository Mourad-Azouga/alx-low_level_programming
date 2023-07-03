#include "main.h"
#include <stddef.h>

/**
 * _strspn - Returns the number of bytes in the initial segment of `s`
 *            which consists only of bytes from `accept`.
 * @s: The string to be searched.
 * @accept: The string containing the characters to be matched.
 * Return: The number of bytes in the initial segment of `s` that consist
 *         only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n = 0;
if (s != NULL && accept != NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
break;
}
}
return (n);
}
