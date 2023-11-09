#include "lists.h"
/**
 * dlistint_len - Calculates list length
 * @h:list head
 * Return: list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
