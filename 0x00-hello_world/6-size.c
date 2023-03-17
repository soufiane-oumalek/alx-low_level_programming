#include<stdio.h>
/**
 *main - Entry point
 *Return: 0 Always (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", ziseof(char));
	printf("size of a int: %zu byte(s)\n", ziseof(int));
	printf("zise of a long int: %zu byte(s)\n", ziseof(long int));
	printf("zise of a long long int: %zu byte(s)\n", ziseof(long long int));
	printf("zise of a float: %zu byte(s)\n", ziseof(float));
	return (0);
}
