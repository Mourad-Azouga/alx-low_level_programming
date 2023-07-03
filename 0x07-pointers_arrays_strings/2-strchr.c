#include "main.h"
#include "_strlen.c"
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
unsigned int len;
len = _strlen(s);
for (i = 0; i < len; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
