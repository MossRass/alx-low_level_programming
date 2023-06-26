#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int first;

	while (str[len] != '\0')
	{
		len++;
	}

	first = len / 2;

	while (str[fisrt] != '\0')
	{
		_putchar(str[first]);
		first++;
	}

	_putchar('\n');
}

