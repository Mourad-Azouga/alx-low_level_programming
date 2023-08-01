#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of list.
 * @head: head of node linked list
 * @index: index of the node.
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

for (i = 0; i < index && head != NULL; i++)
head = head->next;
return (head);
}
