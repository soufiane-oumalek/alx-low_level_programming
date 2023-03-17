#include<stdio.h>
/**
 *main - Entry point
 *Return: 0 Always (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int: %lu byte(s)\n", sizeof(int));
	printf("zise of a long int: %lu byte(s)\n", sizeof(long int));
	printf("zise of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("zise of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
