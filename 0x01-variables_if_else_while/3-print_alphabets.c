#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This script prints the alphabet lower
 *              case
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
{putchar(ch); }
for (CH = 'A'; CH <= 'Z'; CH++)
{putchar(CH); }
putchar ('\n');
return (0);
}
