#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument for count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	j = atoi(argv[1]);
	k = atoi(argv[2]);
	printf("%d\n", j * k);
	return (0);
}
