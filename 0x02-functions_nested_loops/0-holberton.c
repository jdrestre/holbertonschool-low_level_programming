#include "holberton.h"

/**
 * main - prints on screen
 * _putchar write on screen
 * Return: always 0
 */

int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);

}
