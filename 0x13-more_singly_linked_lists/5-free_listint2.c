#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list.
 * @head: Pointer to a pointer to the first node (list header).
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

	while (*head != NULL)
	{

	temp = (*head)->next;

	free(*head);
	*head = temp;
	}
*head = NULL;
}

