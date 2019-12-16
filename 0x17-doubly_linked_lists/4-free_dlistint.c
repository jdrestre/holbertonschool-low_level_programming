#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to pointer to head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
