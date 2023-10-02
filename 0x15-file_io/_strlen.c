#include "main.h"
/**
 * _strlen - calculates string length
 * @str: the string
 * Return: length of string
 */
ssize_t _strlen(const char*)
{
	ssize_t len = 0;

	while (str != '\0' && str)
	{
		str++;
		len++;
	}
	return (len);
}
