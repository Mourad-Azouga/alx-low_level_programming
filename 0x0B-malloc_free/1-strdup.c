#include "main.h"
#include "strlen.c"
#include <stdlib.h>
#include <stddef.h>


/**
 * _strdup - Dups a str with malloc for allocated mem
 * @str: the string to be duplicated
 * Return: Pointer to the dup string or NULL if fail.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

if (str == 0)
return (NULL);
len = _strlen(str);
dup = malloc((len + 1) * sizeof(char));
for (i = 0; i < len; i++)
dup[i] = str[i];
return (dup);
}
