#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This is the main function that serves as the
 *              starting point of the program.
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
