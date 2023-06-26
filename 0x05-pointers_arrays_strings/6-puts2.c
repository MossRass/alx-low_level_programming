#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: void
 */
void puts2(char *str)
{

	int len = 0;
	int place;

	while (str[len] != '\0')
	{
		len++;
	}

	for (palce = 0; place < length; place += 2)
	{
		_putchar(str[place]);
	}

	_putchar('\n');


}

