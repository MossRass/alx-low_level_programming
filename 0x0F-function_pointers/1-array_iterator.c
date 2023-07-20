
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints an array trouph a func pointer
 * @array: array
 * @size: array size
 * @action: func pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
