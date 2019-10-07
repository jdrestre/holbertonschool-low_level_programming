#include "holberton.h"

/**
 * _strspn - search a string for a set of bytes. Gets length prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match, accept_len;
	unsigned int byte_count = 0;

	byte_count = 0;

	for (i = 0; accept[i] != '\0'; i++)
		;
	accept_len = i;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				match = 1;

			if (j == accept_len - 1 && match == 1)
				byte_count++;
			else if (j == accept_len - 1 && match == 0)
				return (byte_count);
		}
	}
	return (byte_count);
}
