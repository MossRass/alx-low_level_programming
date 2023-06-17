#include <stdio.h>

/**
 *main - entry point
 *
 * Description: single-digit numbers
 *
 * Return: alwyas 0 (success)
*/
int main(void)
{
	int num;

	for (num = 48 ; num <= 57 ; num++)
	{
		putchar(num);
		if (num == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
