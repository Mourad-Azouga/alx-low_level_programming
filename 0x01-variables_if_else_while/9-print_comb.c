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
int comb;
for (comb = 0; comb < 9; comb++)
{ 
putchar (comb + '0');
putchar (',');
}
putchar('9');
putchar('\n');
return (0);
}
