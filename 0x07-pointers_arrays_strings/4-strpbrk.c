#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing bytes to be searched for
 *
 * Return: pointer to byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
