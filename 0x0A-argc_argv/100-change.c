#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_negative(char *str);

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
if (!is_negative(argv[1]))
{
printf("0\n");
}
else
{
int num = atoi(argv[1]);
for (i = 0; num > 0; i++)
{
if (num >= 25)
{
num -= 25;
}
else
if (num >= 10 && num < 25)
{
num -= 10;
}
else
if (num >= 5 && num < 10)
{
num -= 5;
}
else
if (num >= 2 && num < 5)
{
num -= 2;
}
else
if (num >= 1 && num < 2)
{
num -= 1;
}
}
printf("%d\n", i);
}
}
return (0);
}

/**
 * is_negative - Check if the number is negative
 * @str: The string to check
 *
 * Return: 0 if negative, 1 if positive
 */
int is_negative(char *str)
{
if (str[0] == '-')
return (0);
else
return (1);
}
