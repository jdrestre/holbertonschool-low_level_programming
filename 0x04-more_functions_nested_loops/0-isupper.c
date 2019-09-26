#include "holberton.h"

/**
 * _isupper - more funtions check character is uppercase.
 *
 * @j: character for evaluation.
 * Return: 1 upper or 0 lower.
 *
 */

int _isupper(int j)
{
	if (j >= 65 && j <= 90)
	{
		return (1);
	}

	return (0);
}
