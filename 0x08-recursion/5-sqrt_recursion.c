#include "main.h"
/**
 * sqrroot - Function that finds the square root of a number.
 * @n: Number we are increasing to find the square root.
 * @root: The square root of n
 * Return: 0
 */

int sqrroot(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	else
		return (sqrroot(n, root + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a
 * number.
 * @n: Number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrroot(n, 1));
}
