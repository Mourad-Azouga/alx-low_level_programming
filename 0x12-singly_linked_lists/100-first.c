#include <stdio.h>
#include "lists.h"
void _constructor(void) __attribute__ ((constructor));
/**
 * _constructor - Executes before main()
 * Return: Void
*/

void _constructor(void)
{
printf("You're beat! and yet, you must allow \n"
	"I bore my house upon my back!\n");
}

