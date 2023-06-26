#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int place = 0;

	while (str[place] != '\0')
	{
		_putchar(str[place]);
		place += 2;
	}

	_putchar('\n');
}

