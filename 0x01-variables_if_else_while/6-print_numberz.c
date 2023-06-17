#include <stdio.h>

/**
 *main - entry point
 *
 * Description: digit numbers of base 10
 *
 * Return: alwyas 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);
}
