#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *@a: integer to swap
 *@b: integer to swap
 *Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
