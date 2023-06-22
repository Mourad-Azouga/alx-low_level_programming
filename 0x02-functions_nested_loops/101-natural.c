#include <stdio.h>
/**
 * main - main function
 *
 * Return: Success 0
 */
int main(void)
{
	int n;
	int i = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			i += n;
		}

	}
	printf("%d\n", i);
	return (0);
}
