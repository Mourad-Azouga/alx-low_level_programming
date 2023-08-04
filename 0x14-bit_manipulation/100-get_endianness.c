#include <stdio.h>
/**
 * get_endianness - Get's the endianness of the computer'
 * Return: a pointer to the str
*/
int get_endianness(void)
{
unsigned int num = 1;
char *ptr = (char *)&num;
return (*ptr);
}
