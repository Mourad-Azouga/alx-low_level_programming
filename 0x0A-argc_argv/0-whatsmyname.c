#include <stdio.h>
#include"main.h"
#define UNUSED(x) (void)(x)
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int  argc, char *argv[])
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
