#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @b: pointing to a string
 *
 * Return: the converted number, or 0 if
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
