#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 * @head: Pointer to a pointer to the first node (list header).
 * @n: Value to be stored in the new node.
 * Return: The address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

if (*head == NULL)
	*head = new_node;
else
	{
	tail = *head;
	while (tail->next != NULL)
	tail = tail->next;

	tail->next = new_node;
	}
	return (new_node);
}
