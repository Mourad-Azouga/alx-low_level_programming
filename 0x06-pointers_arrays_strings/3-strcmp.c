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
int i = 0;
while (s1[i] - s2[i] == 0 && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
