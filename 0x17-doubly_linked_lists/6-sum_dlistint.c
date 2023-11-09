#include "lists.h"
/**
 * sum_dlistint - sums the data nodes from the list
 * @head: list's head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
