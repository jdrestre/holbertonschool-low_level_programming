#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: 0.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{

	char *p = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest = '\0';
	return (p);
}
