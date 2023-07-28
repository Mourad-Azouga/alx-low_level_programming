#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints list
 * @h: the list
 * Return: the ammount of nodes
*/


size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
printf("%s ", current->str);
current = current->next;
count++;
printf("\n");
}
return (count);
}
