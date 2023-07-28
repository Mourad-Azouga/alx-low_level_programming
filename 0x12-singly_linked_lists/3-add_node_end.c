#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Returns the num of elem in linked list.
 * @head: The head of list
 * @str: String in the node
 * Return: the list of numbers.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;
int i = 0;

		while (str[i])
			i++;

if (!head || !new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = i;


	if (!new_node->str)
	{
	free(new_node);
	return (NULL);
	}

if (node)
{
	while (node->next)
	node = node->next;
	node->next = new_node;
}
else

*head = new_node;
return (new_node);
}
