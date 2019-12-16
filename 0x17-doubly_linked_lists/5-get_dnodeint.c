#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t or if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (!head)
		return (NULL);

	for (j = 0; j < index; j++, head = head->next)
		if (!head)
			return (NULL);
	return (head);
}
