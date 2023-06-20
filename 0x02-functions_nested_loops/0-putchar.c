#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This is the main function that serves as the
 *              starting point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
int i;
char sentence[] = "_putchar\n";
int length = sizeof(sentence) / sizeof(sentence[0]);
for (i = 0; i < length - 1; i++)
{
_putchar(sentence[i]);
}
return (0);
}
