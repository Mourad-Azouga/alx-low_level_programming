#include "main.h"
#include "strlen.c"

/**
 * _strcmp - compares two strings lexicographically
 * @s1: first string
 * @s2: second string
 *
 * Return:
 *   0 if the strings are equal
 *   positive integer if s1 is greater than s2
 *   negative integer if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
int result = 0;
int len1, len2;
int i = 0;
len1 = _strlen(s1);
len2 = _strlen(s2);
while (i < len1 && i < len2)
{
if (s1[i] > s2[i])
{
result = 15;
break;
}
else
if (s1[i] < s2[i])
{
result = -15;
break;
}
i++;
}
if (result == 0)
{
if (len1 > len2)
result = 15;
else
if (len1 < len2)
result = -15;
}
return (result);
}
