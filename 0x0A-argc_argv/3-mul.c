#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument for count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (j = 1; j < 3; j++)
			k *= atoi(argv[j]);

		printf("%d\n", k);
	}
	return (0);
}

