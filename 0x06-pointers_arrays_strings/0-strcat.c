#include "main.h"
#include "strlen.c"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
int l1 = _strlen(dest);
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[l1 + i] = src[i];
}
dest[l1 + i] = '\0';
return (ptr);
}
