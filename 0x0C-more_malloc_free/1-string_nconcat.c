#include "strlen.c"
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: number of bytes of the second string
 * Return: Pointer to the concatenated string or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
concat = malloc((len1 + len2 + 1) * sizeof(char));

if (concat == NULL)
return (NULL);

if (n >= len2)
n = len2;

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < len2; j++)
concat[i++] = s2[j];
concat[i] = '\0';
return (concat);
}
