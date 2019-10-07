#include "holberton.h"

/**
 * _memset - Entry point
 * @s: char variable
 * @b: char variable
 * @n: int variable
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
