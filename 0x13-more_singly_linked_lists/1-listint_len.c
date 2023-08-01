#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Prints the num elements of a list.
 * @h: List header.
 * Return: The number of nodes.
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != 0)
	{
	count++;
	h = h->next;
	}
return (count);
}
