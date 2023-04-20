#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argv: argument pointer
 * @argc: argumenit
 * Return 0
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int nm1, nm2, S;
	char *oper;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	oper = argv[1];
	nm1 = atoi(argv[2]);
	nm2 = atoi(argv[3]);

	if ((*oper == '/' || *oper == '%') && nm2 == 0)
	{
		printf("ERROR");
		return (100);
	}
	fun = get_op_func(oper);

	if (fun == 0)
	{
		printf("ERROR");
		return (99);
	}

	S = fun(nm1, nm2);
	printf("%d\n", S);
	return (0);
}
