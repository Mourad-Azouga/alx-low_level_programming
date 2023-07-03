#include "main.h"
#include <stddef.h>


/**
 * *_strchr - Returns a pointer to the first occurence of c in the str s
 * @s: The searched string
 * @c: The seached character
 * Return: Pointer to the characyer
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
