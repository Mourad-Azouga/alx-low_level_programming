#include "main.h"
#include "strlen.c"
/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int dest_len = _strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (ptr);
}
