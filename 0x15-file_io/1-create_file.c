#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: name of the file to create
 * @text_content: content text of file
 *
 * Return:1 on success, -1 on failure (file can not be created, file can not be
 * written, write fails, etc)
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int da, len;
	ssize_t wr;

	if (!filename)
	{
		return (-1);
	}

	da = open("filename", O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (da == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(da);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wr = write(da, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}

	close(da);
	return (1);
}
