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
	int conta, ban;
	unsigned long int k;

	conta = (sizeof(n) * 8 - 1);
	ban = 0;

	while (conta >= 0)
	{
		k = n >> conta;

		if (k & 1)
		{
			_putchar ('1');
			ban = 1;
		}

		else if ((ban == 1) || ((conta == 0) && (ban == 0)))
			_putchar('0');
		conta = conta - 1;
	}
}
