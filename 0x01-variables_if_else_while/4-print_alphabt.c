#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet except q and e
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (lettre == 'q' || lettre == 'e')
		{
			lettre++;
			continue;
		}
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
