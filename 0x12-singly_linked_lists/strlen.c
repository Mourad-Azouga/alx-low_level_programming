#include "lists.h"
/**
 * _strlen - Calculates the len
 * @s: The string to be len
 * Return: Strlen
*/
int _strlen(char *s)
{
	int len = 0;

while (s[len] != '\0')
{
len++;
}

return (len);
}
