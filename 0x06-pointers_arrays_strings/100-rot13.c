#include "main.h"

/**
 * *rot13 - encrypts string rot13
 * @str: pointer to the input string
 *
 * Return: str encrypted
 */
char *rot13(char *str)
{
char p1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char p2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i;
int j = 0;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; p1[j] != '\0'; j++)
{
if (str[i] == p1[j])
{
str[i] = p2[j];
break;
}
}
}
return (str);
}
