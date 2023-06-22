#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = a;
	long int f = a + b;

	while (f < 4000000)
	{
		if (f % 2 == 0)
		{
			count += f;
		}
		a = b;
		b = f;
		f = a + b;
	}
	printf("%d\n", count);
	return (0);
}
