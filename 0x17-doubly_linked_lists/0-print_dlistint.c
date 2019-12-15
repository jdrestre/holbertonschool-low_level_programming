#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: pointer to head a list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node;
	size_t tot = 0;

	for (node = (dlistint_t *)h; node; node = node->next)
	{
		printf("%d\n", node->n);
		tot++;
	}
	return (tot);
}
