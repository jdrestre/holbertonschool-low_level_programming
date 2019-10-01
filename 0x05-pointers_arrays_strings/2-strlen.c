#include "holberton.h"

/**
 * _strlen - the length of a string.
 * @str: int variable
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *str)
{
        int b = 0, c;

        while (*(str + c) != '\0')
        {
                c++;
                b++;
        }

        return (b);
}
