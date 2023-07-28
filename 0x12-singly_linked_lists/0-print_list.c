#include "strlen.c"
#include <stdio.h>
#include "lists.h"
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
