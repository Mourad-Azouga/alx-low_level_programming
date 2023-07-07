#include <stdio.h>
#include"main.h"
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int count;
for (count = 1; count < argc; count++)
printf("%s\n", argv[count]);
return (0);
}
