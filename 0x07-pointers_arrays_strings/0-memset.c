#include "main.h"
#include <stddef.h>


/**
 * *_memset - fills the first n bytes of s with the cte b
 * @n: memory area
 * @s: pointer to the work area
 * @b: the cte that s will be filled with.
 * Return: the pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (s == NULL || n == 0)
	return (s);
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
