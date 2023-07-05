#include "main.h"

int control_prime(int n, int val);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (control_prime(n, n - 1));
}

/**
 * control_prime - control if a number is prime
 * @n: number
 * @val: number
 * Return: 1 if n is prime, otherwise 0
 */

int control_prime(int n, int val)
{
	if (val == 1)
		return (1);
	if (n % val == 0 && val > 0)
		return (0);
	return (control_prime(n, val - 1));
}
