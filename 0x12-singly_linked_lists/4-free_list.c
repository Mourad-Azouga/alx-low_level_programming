#include <stdio.h>
#include "lists.h"
/**
 * free_list - Free list
 * @head: The head of list
 * Return: Void
*/

void free_list(list_t *head)
{
list_t *temp;
	while (head)
{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
}
}
