#include <stdio.h>
#include <stddef.h>

/**
 * main - program
 * @ac: arg num
 * @av: arg holder
 * Return: void
*/


int main(int argc, char  **argv[])
{
    int i = 0;

    while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
        i++;
	}
	return (0);
}