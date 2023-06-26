#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void reverseString(char *s)
{

	int len = 0;
	int first_lettre = 0;
	int last_lettre = 0;
	char place;

	while (s[len] != '\0')
	{
		len++;
	}

	first_lettre = 0;
	last_lettre = len - 1;

	while (first_lettre < last_lettre)
	{
		place = s[first_lettre];
		s[first_lettre] = s[last_lettre];
		s[last_lettre] = place;

		first_lettre++;
		last_lettre--;
	}
}
