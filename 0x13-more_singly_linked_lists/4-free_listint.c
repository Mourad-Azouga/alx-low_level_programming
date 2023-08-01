#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Pointer to a pointer to the first node (list header).
 */

void free_listint(listint_t *head)
{
listint_t *temp;

	while (head != NULL)
	{

	temp = head->next;

	if (head->str != NULL)
	free(head->str);

	free(head);
	head = temp;
	}
}

