#include "shell.h"

/* This file is made by Mourad */
/* This file is limited to only 5 functions because of regulations */

/**
 * _strlen - Calculates the lenght of a string
 * @str: the string
 * Return: the length
*/
int _strlen(char *str)
{
	int n = 0;

	while (str[n] != '\0')
{
	n++;
}
return (n);
}


/**
 * _strcmp - Compares two strings
 * @str1: The frst string
 * @str2: the second string
 * Return: 1 on success and 0 otherwise
*/
int _strcmp(char *str1, char *str2)
{
while (*str1 && *str2)
{
if (*str1 != *str2)
	return (*str1 - *str2);
	str1++;
	str2++;
}
if (*str1 == *str2)
	return (0);
else
	{
if (*str1 > *str2)
	return (1);
else
	return (-1);
	}
}


/**
 * _strcat - concatenate 2 strings together
 * @str1: the first string
 * @str2: the second string
 * Return: pointer to the two strings concatenated
*/
char *_strcat(char *str1, char *str2)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *cat;
if (!*str1)
str1 = "";
if (!*str2)
str2 = "";
len1 = _strlen(str1);
len2 = _strlen(str2);
cat = malloc((len1 + len2 + 1) * sizeof(char));
if (cat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
cat[i] = str1[i];
for (j = 0; j < len2; j++)
cat[i++] = str2[j];
cat[i] = '\0';
return (cat);
}


/**
 * _strncat - Same as strcat but wit n character
 * @str1: string 1
 * @str2: string 2
 * @n: n character
 * Return: pointer to concatenated string
*/
char *_strncat(char *str1, char *str2, int n)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *cat;

if (!*str1)
str1 = "";
if (!*str2)
str2 = "";
len1 = _strlen(str1);
len2 = _strlen(str2);

if (n > len1)
n = len1;

cat = malloc((len1 + len2 + 1) * sizeof(char));
if (cat == NULL)
return (NULL);
for (i = 0; i < n; i++)
cat[i] = str1[i];
for (j = 0; j < len2; j++)
cat[i++] = str2[j];
cat[i] = '\0';
return (cat);
}


/**
 * _strncpy - Copies n bytes from src to dest
 * @str1: source
 * @str2: destination
 * @n: number
 * Return: pointer to the destination
*/
char *_strncpy(char *str2, char *str1, int n)
{

int i, len = _strlen(str1);
if (n > len)
n = len;
str2 = malloc((n + 1) * sizeof(char));

for (i = 0; i < n && str1[i] != '\0'; i++)
{
str2[i] = str1[i];
}

str2[i] = '\0';
return (str2);
}