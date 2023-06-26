#include <stddef.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char temp;

	if (s != NULL)
	{
		while (*end != '\0')
		{
			length++;
			end++;
		}

		end--;

		while (start < end)
		{
			temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
	}
}

