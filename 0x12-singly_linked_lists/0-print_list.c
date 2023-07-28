
#include <stdio.h>
#include "lists.h"
int _strlen(const char *s);
/**
 * _strlen - Calculates the len
 * @s: The string to be len
 * Return: Strlen
*/

int _strlen(const char *s)
{
int len = 0;
if (!s)
return (0);
while (*s++)
len++;
return (len);
}

/**
 * print_list - Prints list
 * @h: the list
 * Return: the ammount of nodes
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("[%u] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
count++;
h = h->next;
}
return (count);
}
