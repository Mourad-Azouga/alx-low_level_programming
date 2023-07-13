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
unsigned int i, len1, len2;
	char *concat;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = 0;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * n + len1 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[i + len1] = s2[i];

	concat[i + len1] = '\0';

	return (concat);
}
