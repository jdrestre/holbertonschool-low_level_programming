#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (node = (listint_t *)h; node != NULL; node = node->next)
	{
		printf("%u\n", node->n);
		count++;
	}
		return (count);
}
