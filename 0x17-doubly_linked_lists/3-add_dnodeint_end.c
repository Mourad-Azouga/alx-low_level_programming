#include "lists.h"
/**
 * add_dnodeint_end - adds node in the end of the list
 * @head: list's head
 * @n:data to be added to the node
 * Return: node's address or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		perror("malloc error");
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	h = *head;

	if (h != NULL)
	{
	while (h->next != NULL)
		h = h->next;
	}
	new->prev = h;
	if (h != NULL)
		h->next = new;
	*head = new;
	return (new);
}
