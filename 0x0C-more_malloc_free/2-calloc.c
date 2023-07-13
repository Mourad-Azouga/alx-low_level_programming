#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates mem for array
 * @nmemb: Elements
 * @size: size.
 * Return: Pointer to allocated mem or NULL if faillure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *array;
if (nmemb == 0 || size == 0)
return (NULL);

array = malloc(nmemb * size);

if (array == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
return (array);
}
