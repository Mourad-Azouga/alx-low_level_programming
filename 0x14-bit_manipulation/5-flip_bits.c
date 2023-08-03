#include "main.h"
/**
 * flip_bits - flips bits
 * @n: 1st num
 * @m: 2sd num
 * Return: unsigned int val
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
