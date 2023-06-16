#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase and uppercase alphabet
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char lettre = 'a';
	char lettre2 = 'A';

	while (lettre <= 'z')
	{
	putchar(lettre);
	lettre++;
	} while (lettre2 <= 'Z')
	{
	putchar(lettre2);
	lettre2++;
	}
	putchar('\n');

	return (0);
}
