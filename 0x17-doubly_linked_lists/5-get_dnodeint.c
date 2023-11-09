#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: list's head
 * @index: index
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	for ( i = 0; i < index; i++)
	{
	head = head->next;
	}
	return (head);	
}
