#include "main.h"
#include "_strlen.c"
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);
return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Recursive function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring being checked.
 * @end: The ending index of the substring being checked.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

