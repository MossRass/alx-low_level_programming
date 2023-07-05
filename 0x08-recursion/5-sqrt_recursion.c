#include "main.h"

int actual_sqrt_recursion(int n, int val);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: int to calculate the sqaure root of
 * @val: square root
 * Return: int
 */
int actual_sqrt_recursion(int n, int val)
{
	if (val * val > n)
		return (-1);
	if (val * val == n)
		return (val);
	return (actual_sqrt_recursion(n, val + 1));
}
