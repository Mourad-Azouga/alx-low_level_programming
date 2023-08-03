#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary to uint.
 * @b: Binary string
 * Return: The converted number or 0 if failure.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int end = 0;
int i, len;

if (b == NULL)
	return (0);
len = 0;
while (b[len] != '\0')
	len++;

for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; i < len; i++)
{
end = (end << 1) | (b[i] - '0');
}
return (end);
}

