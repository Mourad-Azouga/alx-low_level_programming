#include "main.h"
/*
 * _strlen - returns length of str
 * @c: string to be calculated
 * Return: length
 */
size_t _strlen(const char *s)
{
size_t i = 0;
while (s[i] != '\0')
i++;
return (i);
}
