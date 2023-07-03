#include "main.h"
#include <stddef.h>


/**
 * *_memcpy - fills the first n bytes of s with the cte b
 * @n: memory area
 * @src: source area
 * @dest: destination area
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
if (src == NULL || dest == NULL || n == 0)
return (dest);
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
