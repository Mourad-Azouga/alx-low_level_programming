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
unsigned int *array = 0;
if (nmemb == 0 || size == 0)
return (NULL);

array = malloc(nmemb * size);

if (array == 0)
return (NULL);

return (array);
}
