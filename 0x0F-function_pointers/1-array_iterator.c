#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each elem on an array.
 * @size: Array size
 * @array: the array
 * @action: Pointer to function.
 * Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
if (action != NULL && size != 0 && array != NULL)
for (i = 0; i < size; i++)
action(array[i]);
else
	exit(98);
}
