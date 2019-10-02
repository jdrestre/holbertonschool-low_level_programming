#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	int f, r;
	char z[10];

	f = 0;
	r = 0;

	while (s[f] != '\0')
	{
		z [f] = s[f];
		f++;
	}
	f--;
	while (f >= 0)
	{
		s[f] = z[r];
		f--;
		r++;
	}
	s[r++] = '\0';
}
