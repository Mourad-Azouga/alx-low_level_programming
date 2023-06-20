#include "main.h"

/**
 * _isalpha - Entry point of the program
 *@c: The character to be checked.
 * Description: This function tests if the character
 *              is alphabetical and returns 1 if true
 *              or 0 if false.
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

