#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Create an array of chars and ini it with a specific char.
 * @size: The array's size.
 * @c: The specific character.
 * Return: Pointer to the array or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
return (NULL);
a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
