#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Create array of int
 * @min: Min
 * @max: Max
 * Return: Pointer to array or NULL if faillure.
*/
int *array_range(int min, int max)
{
int *array, i, size;


if (min > max)
return (NULL);
size = max - min + 1;

array = malloc(size *sizeof(int));
if (array != NULL)
{
for (i = 0; i < size; i++)
array [i] = min++;
return (array);
}
else
return (NULL);
}
