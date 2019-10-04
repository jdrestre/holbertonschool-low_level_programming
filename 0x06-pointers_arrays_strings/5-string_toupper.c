#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @lu: lowercase to uppercase.
 *
 * Return: Always 0.
 */
char *string_toupper(char *lu)
{
	int i;

	i = 0;
	while (lu[i] != '\0')
	{
		if (lu[i] >= 97 && lu[i] <= 122)
		{
			lu[i] = lu[i] - 32;
		}
		i++;
	}
	return (lu);
}
