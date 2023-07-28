#include "lists.h"
int _strlen(const char *s);
/**
 * _strlen - Calculates the len
 * @s: The string to be len
 * Return: Strlen
*/

int _strlen(const char *s)
{
int len = 0;
if (!s)
return (0);
while (*s++)
len++;
return (len);
}
