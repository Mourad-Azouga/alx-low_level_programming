#include <stdio.h>

int get_endianness(void)
{
unsigned int num = 1;
char *ptr = (char *)&num;
return (*ptr);
}
