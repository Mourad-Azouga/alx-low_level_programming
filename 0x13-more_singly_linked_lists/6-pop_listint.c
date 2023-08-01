#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: Pointer to a pointer to the first node (list header).
 * Return: node data of the deleted node.
 */
int pop_listint(listint_t **head)
{
listint_t *temp = NULL;
int datn = 0;

	if (head == NULL || *head == NULL)
		return (datn);
	temp = *head;
	temp->n = datn;
	free(*head);
	temp->next = *head;

return (datn);
}
