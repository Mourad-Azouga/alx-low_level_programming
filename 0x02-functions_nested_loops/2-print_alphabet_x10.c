#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Description: This is the function that serves as the
 *              guiding point of the program.
 *
 * Return: Always returns 0.
 */
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
