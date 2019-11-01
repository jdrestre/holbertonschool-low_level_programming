#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head node
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			n++;
		h = h->next;
		}
	}
	return (n);
}
