#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: head of node linked list
 * @index: index where node is deleted
 * Return: 1 success and -1 faillure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
}

	for (i = 0; i < index - 1 && temp != NULL; i++)
{
	prev = temp;
	temp = temp->next;
}

if (temp == NULL)
	return (-1);


prev->next = temp->next;
free(temp);
return (1);
}
