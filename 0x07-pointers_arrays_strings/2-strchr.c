#include "holberton.h"

/**
 * _strchr - locate character in string
 * @s: The string to be searched. char
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		if (s[idx] == c)
			return (s + idx);
	}

	return ('\0');
}
