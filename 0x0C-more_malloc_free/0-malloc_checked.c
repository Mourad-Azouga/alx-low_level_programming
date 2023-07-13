#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - Allocates mem using malloc.
 * @b: Int to be malloced.
 * Return: Pointer to the allocated mem or 98 if faillure.
*/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);
if (mem == 0)
exit(98);/* Exists if malloc fails*/
return (mem);
}
