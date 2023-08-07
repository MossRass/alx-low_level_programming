#include "main.h"

/**
 * clear_bit - clear the bit at the index
 * @n: the num to index
 * @index: the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
