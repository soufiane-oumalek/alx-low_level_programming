#include  <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument to count
 * @argv: array name
 * Retune: 0
 */
int main(int argc, char **argv)
{
	int i, k, S;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!((argv[i][k] >= '0' && argv[i][k] < '9') || argv[i][k] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
		S += atoi(argv[i]);
	}
	printf("%d\n", S);
	return (0);
}

