#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Sums the n data.
 * @head: head of node linked list
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
