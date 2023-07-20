#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - give the sum of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - give the difference of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - give the product of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - give the division of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -give the remainder of the division of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

