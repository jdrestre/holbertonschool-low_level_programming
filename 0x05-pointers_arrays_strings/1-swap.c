#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 *
 * @a: Variable entera int.
 * @b: Variable entera int.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
