#include "main.h"

/**
 * cap_string - capitalizes every word in a string
 * @str: pointer to the input string
 *
 * Return: the string with every word capitalized
 */
char *cap_string(char *str)
{
int i = 0;
int prev_sep = 1;
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
prev_sep = 1;
}
else
if (str[i] >= 'a' && str[i] <= 'z' && prev_sep)
{
str[i] = str[i] - 32;
prev_sep = 0;
}
else
{
prev_sep = 0;
}
i++;
}
return (str);
}
