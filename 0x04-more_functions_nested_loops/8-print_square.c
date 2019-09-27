#include "holberton.h"

/**
 * print_square - print a square - size..
 * @size: used # size of the square
 *
 * Return: void.
 *
 */
void print_square(int size)
{
	int f;
	int g;

	if (size > 0)
	{
		for (g = 0; g < size; g++)
		{
			for (f = 0; f < size; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
