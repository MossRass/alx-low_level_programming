#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int line, pos;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (line = 0; line < n; line++)
		{
			for (pos = 0; pos < n; pos++)
			{
				if (line == pos)
					_putchar('\\');
				else if (pos < line)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

