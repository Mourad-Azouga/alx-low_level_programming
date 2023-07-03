#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Returns the first occurence byte in the str `s`
 *            which consists only of bytes from `accept`.
 * @s: The string to be searched.
 * @accept: The string containing the characters to be matched.
 * Return: a pointer to the byte in s that matches one
 *           of the bytes in accept, or NULL if no
 *	     such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
if (s != NULL && accept != NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
}
return (NULL);
}
