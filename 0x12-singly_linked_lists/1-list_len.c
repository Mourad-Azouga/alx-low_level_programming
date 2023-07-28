#include "lists.h"
/**
 * list_len - Returns the num of elem in linked list.
 * @h: The head of the list.
 * Return: the list of numbers.
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
