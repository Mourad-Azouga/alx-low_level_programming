#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Adds node at index
 * @head: head of node linked list
 * @idx: index where node is added
 * @n: node's data
 * Return: The sum.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	temp = temp->next;

if (temp == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
