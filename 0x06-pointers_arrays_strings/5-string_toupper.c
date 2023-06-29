#include "main.h"
#include "strlen.c"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the resulting uppercase string
 */
char *string_toupper(char *str)
{
int i = 0;
int len = _strlen(str);
while (i < len)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
