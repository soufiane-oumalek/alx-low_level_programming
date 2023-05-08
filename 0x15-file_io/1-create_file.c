#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - creat a file
 * @filename: name of file
 * @text_content: the content on the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r = 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		ssize_t b_writt = write(fd, text_content, strlen(text_content));
		if (b_writt == -1 || (size_t)b_writt != strlen(text_content))
		{
			r = -1;
		}
	}

	if (close(fd) == -1)
		r = -1;
	return (r);
}

