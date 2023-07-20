#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>



/**
 * int_index - Searches for an integer
 * @array: Array in question.
 * @size: Array size
 * @cmp: Pointer to comparition function.
 * Return: The index of compare function or 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
