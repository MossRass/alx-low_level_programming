#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int row, square;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0 ; row < size ; row++)
		{
			for (square = 0 ; square < size ; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
