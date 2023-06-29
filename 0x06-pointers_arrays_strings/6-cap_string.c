#include "main.h"

/**
 * cap_string - Capitalizes every word in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the string with every word capitalized
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next)
{
str[i] = str[i] - 32;
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}

i++;
}

return (str);
}

