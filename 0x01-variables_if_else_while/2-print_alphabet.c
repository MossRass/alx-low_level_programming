#include <stdio.h>
/**
 * main - entry point
 *
 * description: alphabet lowercase
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
