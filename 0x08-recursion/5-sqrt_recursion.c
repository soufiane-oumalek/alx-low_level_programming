#include "main.h"

/**
 * _sqrt_recursion - Entry function
 * @n: nuumber
 * Return: x
 */
int _sqrt_recursion_helper(int n, int vl)
{
	if (n == 0 || n == 1)
		return (1);
	if (n == vl || n < 0)
		return (-1);
	if (vl * vl == n)
		return (vl);

	return (_sqrt_recursion_helper(n, vl + 1));

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
