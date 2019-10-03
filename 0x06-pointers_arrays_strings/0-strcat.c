#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination
 * @src: in
 *
 * Return: 0.
 *
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	char *p;

	p = dest;
	while (*dest)
	{
		dest++;
	}
	while (*(src + c))
	{
		*dest = *(src + c);
		dest++;
		c++;
	}
	*dest = *(src + c);
	while (dest != p)
	{
		dest--;
	}
	return (dest);
}
