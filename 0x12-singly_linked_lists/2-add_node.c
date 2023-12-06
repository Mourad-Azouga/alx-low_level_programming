#include "lists.h"
/**
 * add_node - Returns the num of elem in linked list.
 * @head: The head of list
 * @str: String in the node
 * Return: the list of numbers.
*/

list_t *add_node(list_t **head, const char *str)
{

	int i = 0;
	list_t *new_head = malloc(sizeof(list_t));

if (!head || !new_head)
return (NULL);
if (str)
{
	while (str[i])
		i++;
		new_head->str = strdup(str);
	if (!new_head->str)
	{
	free(new_head);
	return (NULL);
	}

	new_head->len = i;
}
new_head->next = *head;
*head = new_head;
return (new_head);
}
