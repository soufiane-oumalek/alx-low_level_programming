#include "CALC.H"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: argument pointer
 * @argc: argument
 * Return 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int n1, n2,vs;
	char *op;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	op = argv[1];
	n1 = atoi(argv[2]);
	n2 = atoi(argv[3];

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("ERROR");
		return (100);
	}
	f = get_op_func(op);

	if (f = 0)
	{
		printf("ERROR");
		return (99);
	}

	s = f(n1, n2);
	printf("%d\n", s);
	return (0);
}
