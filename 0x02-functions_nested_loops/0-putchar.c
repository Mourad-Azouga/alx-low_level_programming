#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
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
