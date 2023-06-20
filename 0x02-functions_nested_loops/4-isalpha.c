#include "main.h"

/**
 * _isalpha - Entry point of the program
 *
 * Description: This function tests if the character
 *              is alphabetical and returns 1 if true
 *              or 0 if false.
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
if ((_isalpha(c) != 0) || (_isalpha(c - 32) != 0))
return (1);
else
return (0);
}

