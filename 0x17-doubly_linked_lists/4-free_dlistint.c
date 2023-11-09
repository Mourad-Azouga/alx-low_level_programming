#include"lists.h"
/**
 * free_dlistint - frees list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((h = head) != NULL)
	{
		head = head->next;
		free(h);
	}
}
