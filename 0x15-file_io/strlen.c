#include <stdio.h>
/**
 * _strlen - Personal version of strlen
 * @b: The str
 * Return: len
 */
int _strlen(char *b)
{
int i = 0;
if (!b)
return (0);

while (*b++)
i++;

return (i);
}
