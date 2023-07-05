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
