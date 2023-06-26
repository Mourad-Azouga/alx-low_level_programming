#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps value of 2 integers
 * @a: 1st int
 * @b: 2nd int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;


}
