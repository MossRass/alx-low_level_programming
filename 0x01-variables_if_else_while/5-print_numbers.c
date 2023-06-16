#include <stdio.h>

/**
 * main - entry point
 *
 * Description: digit numbers of base 10
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int num = 0;

	for (num ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
