#include "lists.h"
/**
 * add_dnodeint - adds node in begining of the list
 * @head: list's head
 * @n:data to be added to the node
 * Return: node's address or NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		perror("malloc error");
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	h = *head;
	if (h != NULL)
	{
	while (h->prev != NULL)
		h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
