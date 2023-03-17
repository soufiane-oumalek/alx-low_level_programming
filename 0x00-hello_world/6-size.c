#include<stdio.h>
/**
 *main - Entry point
 *Return: 0 Always (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", ziseof(char));
	printf("size of a int: %lu byte(s)\n", ziseof(int));
	printf("zise of a long int: %lu byte(s)\n", ziseof(long int));
	printf("zise of a long long int: %lu byte(s)\n", ziseof(long long int));
	printf("zise of a float: %lu byte(s)\n", ziseof(float));
	return (0);
}
