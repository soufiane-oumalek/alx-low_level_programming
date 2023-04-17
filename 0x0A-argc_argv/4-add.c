#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * _main - adds positive numbers
 * @argc: argument fot count
 * @argv: pointer array
 * Retrun: int
 */

int main(int argc, char **argv)
{
	char *ptr;
	int i, k, S, len;

	if (argc < 2)
		printf("0\n");
	else
	{
		S = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (k = 0; k < len; k++)
			{
				if (isdigit(*(ptr + k)) == 0)
				{
					printf("ERROR\n");
					return (1);
				}
			}
			S += atoi(argv[i]);
		}
	printf("%d\n", S);
	}
	return (0);
}

