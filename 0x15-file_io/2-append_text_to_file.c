#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of a file
 * @text_content: write content of a file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writt = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	writt = 0;

	if (text_content != NULL)
	{
		writt = write(fd, text_content, strlen(text_content));

		if (writt == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

