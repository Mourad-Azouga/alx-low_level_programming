#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This is a script made for alx projects
 * Return: Always 0 (Success)
 */
int main(void)
{
char cc;
for (cc = 0; cc < 16; cc++)
{
if (cc < 10)
{
putchar(cc + '0');
}
else
{
putchar(cc - 10 + 'a');
}
}
putchar('\n');
return (0);
}
