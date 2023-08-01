#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list.
 * @head: Pointer to a pointer to the first node (list header).
 * @n: Value to be stored in the new node.
 * Return: The address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
<<<<<<< HEAD
	
=======

>>>>>>> d25d52e1ad42129d4c4d035633537c1da7680106
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

