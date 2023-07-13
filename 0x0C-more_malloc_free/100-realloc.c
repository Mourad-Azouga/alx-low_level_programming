#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the previous memory block
 * @old_size: Old size of the memory block
 * @new_size: New size of the memory block
 * Return: Pointer to the reallocated memory block or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size, i;
unsigned char *src, *dest;
if (new_size == old_size)
return (ptr);
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
free(ptr);
return (NULL);
}
if (ptr != NULL)
{
min_size = old_size < new_size ? old_size : new_size;
src = (unsigned char *)ptr;
dest = (unsigned char *)new_ptr;
for (i = 0; i < min_size; i++)
dest[i] = src[i];
free(ptr);
}
return (new_ptr);
}
