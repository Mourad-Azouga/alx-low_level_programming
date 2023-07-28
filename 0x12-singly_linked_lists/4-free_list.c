#include <stdio.h>
#include "lists.h"
/**
 * free_list - Free list
 * @head: The head of list
 * Return: Void
*/

void free_list(list_t *head)
{
list_t *node, *next_node;
if (!head)
return;

node = head;
	while (node)
{
	next_node = node->next;
	free(node);
	free(node->str);
	node = next_node;
}
}
