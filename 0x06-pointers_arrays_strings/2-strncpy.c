#include "main.h"

/**
 * _strncpy - copies a string up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (ptr);
}
