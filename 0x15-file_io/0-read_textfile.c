#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of file
 * @letters: numbers of letter
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	int fp;
	ssize_t xread, xwrite;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	bf = malloc(letters + 1);
	if (bf == NULL)
		return (0);

	xread = read(fp, bf, letters);
	if (xread == -1)
	{
		free(bf);
		close(fp);
		return (0);
	}
	bf[xread] = '\0';

	xwrite = write(STDOUT_FILENO, bf, xread);
	if (xwrite == -1)
	{
		free(bf);
		close(fp);
		return (0);
	}

	free(bf);
	close(fp);

	return (xread);
}

