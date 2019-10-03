#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strncat - concatenates two strings use at most n bytes
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: 0.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
