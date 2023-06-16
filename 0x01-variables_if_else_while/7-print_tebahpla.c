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
char hc;
for (hc = 'z'; hc >= 'a'; hc--)
{putchar(hc); }
putchar('\n');
return (0);
}
