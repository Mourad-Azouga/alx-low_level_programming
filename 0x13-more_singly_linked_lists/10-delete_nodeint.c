#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index of deleted node
 * Return: boolean
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dlt;
	unsigned int count = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && count != index - 1)
		{
			count++;
			temp = temp->next;
		}
		if (count != index - 1)
			return (-1);
		dlt = temp->next;
		temp->next = temp->next->next;
		free(dlt);
		return (1);
	}

}
