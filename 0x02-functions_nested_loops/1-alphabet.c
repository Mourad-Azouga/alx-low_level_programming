#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: This is the print alphabet
 * function that serves as the
 *              prototype for the program
 *
 * Return: Always returns 0.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
