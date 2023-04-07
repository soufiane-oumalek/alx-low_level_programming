#include "main.h"

/**
 * _sqrt_recursion_helper - Entry Functions
 * @n: num
 * @v: num
 * Return: int
 */
int _sqrt_recursion_helper(int n, int v)
{
	if (n == 0 || n == 1)
		return (1);
	if (n == v || n < 0)
		return (-1);
	if (v * v == n)
		return (v);

	return (_sqrt_recursion_helper(n, v + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: nuumber
 * Return: x
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
