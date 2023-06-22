#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int line, tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (line = 1; line <= size; line++)
		{
			for (tri = line; tri < size; tri++)
			{
				_putchar(' ');
			}

			for (tri = 1; tri <= line; tri++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
