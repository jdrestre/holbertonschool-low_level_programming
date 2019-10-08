#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be looked through
 * @needle: substring to be searched for in haystack
 *
 * Return: first occurence of the substring needle in haystack,
 * or NULL is substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
